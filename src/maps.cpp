#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::mapinit()
{
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
    setcolissioninmap(0,0,50,50);
    
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

    if (mapid != mapcons)
    {
        engine->renderer.getTextureRepository().free(map1.id);
        engine->renderer.getTextureRepository().free(map2.id);
        engine->renderer.getTextureRepository().free(map3.id);
        engine->renderer.getTextureRepository().free(map4.id);
        engine->renderer.getTextureRepository().free(map5.id);
        resetcolissioninmap();
        mapcons = mapid;
    }
    
}

void tale::setcolissioninmap(float X1, float Y1, float X2, float Y2) 
    {
      colpos[NumOfCol] = Tyra::Vec4(X1,Y1,X2,Y2);
      NumOfCol++;
    };
void tale::resetcolissioninmap()
{
  std::fill_n(colpos, 100, Tyra::Vec4(0,0,0,0));
  NumOfCol = 0;
}
void tale::colcheck()
{
    bool xcol = false, ycol = false, pxcol = false, pycol = false;
    for (int i = 0; i < NumOfCol; i++)
    {
        if (colpos[0].x < Ppos.x && colpos[0].z > Ppos.x)
        {
            xcol = true;
        }
        if (colpos[0].y < Ppos.y && colpos[0].w > Ppos.y)
        {
            ycol = true;
        }
        if (colpos[0].x < Pposcons.x && colpos[0].z > Pposcons.x)
        {
            pxcol = true;
        }
        if (colpos[0].y < Pposcons.y && colpos[0].w > Pposcons.y)
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
        if (xcol && ycol && !pxcol && !pycol)
        {
            Ppos.x = Pposcons.x;
            Ppos.y = Pposcons.y;
        }

    }
    
  Pposcons = Ppos;
}
}