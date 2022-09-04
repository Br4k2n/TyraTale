#pragma once

#include <tyra>
#include "mapsinfo.hpp"

namespace tale {

class tale : public Tyra::Game {
 public:
  tale(Tyra::Engine* engine);
  ~tale();

  void init();
  void loop();

 private:
  Tyra::Engine* engine;
  Tyra::Sprite player, map1, map2, map3, map4, map5;
  float Xpos = 0, Ypos = 0, vel = 2;
  int direction = 1, dircons = 1, mapid = 0;
  bool moving, texset = false;
  
  void loadsprites();
  void loadtextures();
  void reloadplayer();
  void startplayer();
  void mapinit();
  void camupdate();
  


  Tyra::Texture* ptex1;
  Tyra::Texture* ptex2;
  Tyra::Texture* ptex3;
  Tyra::Texture* ptex4;

int NumOfCol = 0;
Tyra::Vec4 colpos[100] = {};

void setcolissioninmap(float a, float b, float c, float d, bool e) 
    {
      colpos[NumOfCol] = Tyra::Vec4(a,b,c,d);
      NumOfCol++;
    };
void resetcolissioninmap()
{
  std::fill_n(colpos, 100, Tyra::Vec4(0,0,0,0));
  NumOfCol = 0;
}
bool colcheck()
{
  for (int i = 0; i < NumOfCol; i++ )
    {
        if (
          ((colpos[NumOfCol].x > Xpos && colpos[NumOfCol].z < Xpos)
          || (colpos[NumOfCol].x < Xpos && colpos[NumOfCol].z > Xpos))
          &&
          ((colpos[NumOfCol].y > Ypos && colpos[NumOfCol].w < Ypos)
          || (colpos[NumOfCol].y < Ypos && colpos[NumOfCol].w > Ypos))
            )
            {
              return(true);
            }
    }
}

};

}  // namespace Racer
