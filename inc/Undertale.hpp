#pragma once

#include <tyra>

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
  Tyra::Vec2 Ppos = Tyra::Vec2(0,0);
  float  vel = 2, anm = 0;
  int direction = 1, dircons = 1, mapid = 0, mapcons = 0 , GameState = 0;
  bool moving, texset = false, anmt = false, standing = true, mapinited = false;
  
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

  Tyra::Texture* pmtex1;
  Tyra::Texture* pmtex2;
  Tyra::Texture* pmtex3;
  Tyra::Texture* pmtex4;
  Tyra::Texture* pmtex5;
  Tyra::Texture* pmtex6;
  Tyra::Texture* pmtex7;
  Tyra::Texture* pmtex8;

int NumOfCol = 0;
Tyra::Vec4 colpos[100] = {};

void setcolissioninmap(float a, float b, float c, float d) 
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
          ((colpos[NumOfCol].x < Ppos.x && colpos[NumOfCol].z > Ppos.x))
          )
            {
              return(true);
              TYRA_LOG(colpos[NumOfCol].x, " ", colpos[NumOfCol].y);
            }
    }
    
  return(false);
}

};

}  // namespace Racer
