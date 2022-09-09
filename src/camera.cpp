#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::camupdate()
{
    if (mapid == 0)
    {
         map1.position = Vec2(-Ppos.x ,-Ppos.y);
         map2.position = Vec2(512 - Ppos.x, -Ppos.y);
         map3.size = Vec2(0,0);
         map4.size = Vec2(0,0);
         map5.size = Vec2(0,0);
    }
    
   
}



}