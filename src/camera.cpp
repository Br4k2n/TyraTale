#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::camupdate()
{
     auto& ren = engine->renderer.renderer2D;
     if (!camstatic)
     {
     player.position.x =  256;
     player.position.y =  256;
     if (Ppos.x < camborder.x)
     {
          map1.position.x = -camborder.x;
          player.position.x =  256 + Ppos.x - camborder.x;
     }
     else if (Ppos.x > camborder.z)
     {
          map1.position.x = -camborder.z;
          player.position.x =  256 + Ppos.x - camborder.z;
     }
     else
     {
          map1.position.x = -Ppos.x;
     }
     if (Ppos.y < camborder.y)
     {
          map1.position.y = -camborder.y;
          player.position.y =  256 + Ppos.y - camborder.y;
     }
     else if (Ppos.y > camborder.w)
     {
          map1.position.y = -camborder.w;
          player.position.y =  256 + Ppos.y - camborder.w;
     }
     else
     {
          map1.position.y = -Ppos.y;
     }
     }
     
     map2.position = map1.position;
     map3.position = map1.position;
     map4.position = map1.position;
     map5.position = map1.position;
     Vec2 mapsize = map1.size;
    if (mapid == 0 && mapcons == mapid)
    {

         map2.position = map1.position;
         map2.position += Vec2(mapsize.x * 1, mapsize.y * 0);
         
          ren.render(map1);
          if (Ppos.x > 500)
         {
          ren.render(map2);
         }
         
    }
    if (mapid == 1 && mapcons == mapid)
    {
         ren.render(map1);
    }
    if (mapid == 2 && mapcons == mapid)
    {
         ren.render(map1);
    }
    if (mapid == 3 && mapcons == mapid)
    {
         ren.render(map1);
    }
    if (mapid == 4 && mapcons == mapid)
    {
          map2.position += Vec2(mapsize.x * 1, mapsize.y * 0);
          ren.render(map1);
          if (Ppos.x > 250)
         {
          ren.render(map2);
         }
         
         
    }
    if (mapid == 5 && mapcons == mapid)
    {
         ren.render(map1);
    }
    if (mapid == 6 && mapcons == mapid)
    {
         map2.position += Vec2(mapsize.x * 1, mapsize.y * 0);
         map3.position += Vec2(mapsize.x * 2, mapsize.y * 0);
         
         ren.render(map1);
         ren.render(map2);
         if (Ppos.x > -3000){
         ren.render(map3);
         }

    }
    if (mapid == 7 && mapcons == mapid)
    {
         map2.position += Vec2(mapsize.x * 1, mapsize.y * 0);
         map3.position += Vec2(mapsize.x * 2, mapsize.y * 0);
         map4.position += Vec2(mapsize.x * 3, mapsize.y * 0);
         map5.position += Vec2(mapsize.x * 4, mapsize.y * 0);
         
         
          if (Ppos.x < 1032) ren.render(map1);
          if (Ppos.x > 508 && Ppos.x < 2060) ren.render(map2);
          if (Ppos.x > 1528) ren.render(map3);
          if (Ppos.x > 2060 && Ppos.x < 4112) ren.render(map4);
          if (Ppos.x > 3576) ren.render(map5);
         
    }
    if (mapid == 8 && mapcons == mapid)
    {
         ren.render(map1);
    }
    if (mapid == 9 && mapcons == mapid)
    {
         ren.render(map1);
    }
    
     


}



}
