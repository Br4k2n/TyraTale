#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::camupdate()
{
    if (mapid == 0)
    {
         map1.position = Vec2(-Xpos,-Ypos);
         map2.position = Vec2(512 - Xpos, 512 - Ypos);
    }
    
   
}



}