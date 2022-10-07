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
    if (mapid == 6 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.position = Vec2(512 -Ppos.x ,-Ppos.y);
         map3.position = Vec2(1024-Ppos.x ,-Ppos.y);
         ren.render(map1);
         ren.render(map2);
         ren.render(map3);
    }
    if (mapid == 7 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.position = Vec2(512 -Ppos.x ,-Ppos.y);
         map3.position = Vec2(1024-Ppos.x ,-Ppos.y);
         map4.position = Vec2(1536-Ppos.x ,-Ppos.y);
         map5.position = Vec2(2038-Ppos.x ,-Ppos.y);
         if(Ppos.x < 550){ren.render(map1);}
         if(Ppos.x < 1100){ren.render(map2);}
         if(Ppos.x > 500 && Ppos.x < 1550){ren.render(map3);}
         if(Ppos.x > 750){ren.render(map4);}
         if(Ppos.x > 1000){ren.render(map5);}
    }
    if (mapid == 8 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         ren.render(map1);
    }
    if (mapid == 9 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         ren.render(map1);
    }
    
     


}



}
