#include "Undertale.hpp"

namespace tale
{
    using namespace Tyra;

    void tale::transition()
    {
        if (Tbool)
        {
        if (trans.color.a < 128)
        {
        trans.color.a += 6;
        }
        if (trans.color.a >= 128 && !mapdone)
        {
        trans.color.a = 128;
        engine->renderer.getTextureRepository().freeBySprite(map1);
        engine->renderer.getTextureRepository().freeBySprite(map2);
        engine->renderer.getTextureRepository().freeBySprite(map3);
        engine->renderer.getTextureRepository().freeBySprite(map4);
        engine->renderer.getTextureRepository().freeBySprite(map5);
        mapanmcount = 0;
        for (int i = 0; i < 100; i++)
        {
        instances[i].ins_sprite.mode = MODE_STRETCH;
        instances[i].id = -1;
        instances[i].ins_sprite.color.a = 128;
        instances[i].ins_sprite.size = Vec2(32 * 2,32 * 2);
        } 
        resetcolissioninmap();
        removeinstances();
        mapcons = mapid;
        mapinit();
        mapdone = true;
        maptheme();
        Tbool = false;
        }
        }

        if (mapdone)
        {
                trans.color.a -= 6;
            if (trans.color.a < 0)
            {
                trans.color.a = 0;
                mapdone = false;
            }
        }
    }

}