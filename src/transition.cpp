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
        trans.color.a += 2;
        }
        if (trans.color.a >= 128 && !mapdone)
        {
        trans.color.a = 128;
        engine->renderer.getTextureRepository().freeBySprite(map1);
        engine->renderer.getTextureRepository().freeBySprite(map2);
        engine->renderer.getTextureRepository().freeBySprite(map3);
        engine->renderer.getTextureRepository().freeBySprite(map4);
        engine->renderer.getTextureRepository().freeBySprite(map5);
        resetcolissioninmap();
        mapcons = mapid;
        mapinit();
        mapdone = true;
        Tbool = false;
        }
        }

        if (mapdone)
        {
                trans.color.a -= 2;
            if (trans.color.a < 0)
            {
                trans.color.a = 0;
                mapdone = false;
            }
        }
    }

}