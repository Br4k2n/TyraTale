#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::mapinit()
{
    auto colpath = FileUtils::fromCwd("sprites/colision.png");
        if (mapid == 0 && mapid == mapcons)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        map1.mode = SpriteMode::MODE_STRETCH;
        map1.size = Vec2(512, 512);
        map1.position = Vec2(0,0);
        map2.mode = SpriteMode::MODE_STRETCH;
        map2.size = Vec2(512, 512);
        map2.position = Vec2(1024,0);

        setcolissioninmap(-248, -268, 26, -216);
        setcolissioninmap(-28, -226, 20, -194);
        setcolissioninmap(8, -200, 26, -122);
        setcolissioninmap(26, -136, 330, -122);
        setcolissioninmap(370, -140, 416, -114);
        setcolissioninmap(388, -132, 410, -72);
        setcolissioninmap(-10, -86, 398, -74);
        setcolissioninmap(-256, -270, -206, -200);
        setcolissioninmap(-262, -210, -236, -84);
        setcolissioninmap(-252, -110, -218, -88);
        setcolissioninmap(-234, -88, -196, -66);
        setcolissioninmap(-214, -66, -174, -46);
        setcolissioninmap(-196, -48, -36, -36);
        setcolissioninmap(-50, -68, -24, -42);
        setcolissioninmap(-32, -84, 12, -60);

        Ppos = Vec2(-116, -134);

    
    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }
    
}

void tale::setcolissioninmap(float X1, float Y1, float X2, float Y2) 
    {
      colpos[NumOfCol] = Tyra::Vec4(X1,Y1, X2, Y2);
      NumOfCol++;
    };
void tale::resetcolissioninmap()
{
    for (int i = 0; i <= 100; i++){
  colpos[i] = Tyra::Vec4(0,0,0,0);
    }
  NumOfCol = 0;
}
void tale::colcheck()
{
    for (int i = 0; i < NumOfCol; i++)
    {
        bool xcol = false, ycol = false, pxcol = false, pycol = false;
        if (colpos[i].x <= Ppos.x && colpos[i].z >= Ppos.x)
        {
            xcol = true;
        }
        if (colpos[i].y <= Ppos.y && colpos[i].w >= Ppos.y)
        {
            ycol = true;
        }
        if (colpos[i].x <= Pposcons.x && colpos[i].z >= Pposcons.x)
        {
            pxcol = true;
        }
        if (colpos[i].y <= Pposcons.y && colpos[i].w >= Pposcons.y)
        {
            pycol = true;
        }

        if (xcol && ycol && !pxcol && pycol)
        {
            Ppos.x = Pposcons.x;
        }
        if (xcol && ycol && pxcol && !pycol)
        {
            Ppos.y = Pposcons.y;
        }
        

    }
    
  Pposcons = Ppos;
}
    void tale::mapchange()
    {
        if (mapid != mapcons)
    {
        engine->renderer.getTextureRepository().free(map1.id);
        engine->renderer.getTextureRepository().free(map2.id);
        engine->renderer.getTextureRepository().free(map3.id);
        engine->renderer.getTextureRepository().free(map4.id);
        engine->renderer.getTextureRepository().free(map5.id);
        resetcolissioninmap();
        Ppos.x = 0;
        Ppos.y = 0;
        mapcons = mapid;
    }
    }
}