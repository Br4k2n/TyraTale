#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::camupdate()
{
     auto& ren = engine->renderer.renderer2D;
    if (mapid == 0 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.position = Vec2(512 - Ppos.x, -Ppos.y);
         map1.size = Vec2(512, 512);
         map2.size = Vec2(512, 512);
         ren.render(map1);
         ren.render(map2);
         
    }
    if (mapid == 1 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         ren.render(map1);
    }
    if (mapid == 2 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         ren.render(map1);
    }
    if (mapid == 3 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         ren.render(map1);
    }
    if (mapid == 4 && mapcons == mapid)
    {
          map1.position = Vec2(-Ppos.x ,-Ppos.y);
          map2.position = Vec2(512 -Ppos.x,-Ppos.y);
          map1.size = Vec2(512, 512);
          map2.size = Vec2(512, 512);
          ren.render(map1);
          ren.render(map2);
         
    }
    if (mapid == 5 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         ren.render(map1);
    }
    
     


}



}
