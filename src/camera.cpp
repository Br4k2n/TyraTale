#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::camupdate()
{
    if (mapid == 0 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.position = Vec2(512 - Ppos.x, -Ppos.y);
         map3.size = Vec2(0,0);
         map4.size = Vec2(0,0);
         map5.size = Vec2(0,0);
    }
    if (mapid == 1 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.size = Vec2(0,0);
         map3.size = Vec2(0,0);
         map4.size = Vec2(0,0);
         map5.size = Vec2(0,0);
    }
    if (mapid == 2 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.size = Vec2(0,0);
         map3.size = Vec2(0,0);
         map4.size = Vec2(0,0);
         map5.size = Vec2(0,0);
    }
    if (mapid == 3 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.size = Vec2(0,0);
         map3.size = Vec2(0,0);
         map4.size = Vec2(0,0);
         map5.size = Vec2(0,0);
    }
    if (mapid == 4 && mapcons == mapid)
    {
          map1.position = Vec2(-Ppos.x ,-Ppos.y);
          map2.position = Vec2(-Ppos.x + 512,-Ppos.y);

         map2.size = Vec2(512, 512);
         map3.size = Vec2(0,0);
         map4.size = Vec2(0,0);
         map5.size = Vec2(0,0);
    }
    if (mapid == 5 && mapcons == mapid)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.size = Vec2(0,0);
         map3.size = Vec2(0,0);
         map4.size = Vec2(0,0);
         map5.size = Vec2(0,0);
    }
    
   
}



}
