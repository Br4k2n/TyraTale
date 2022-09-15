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
  Tyra::Sprite player, map1, map2, map3, map4, map5, trans;
  Tyra::Vec2 Ppos = Tyra::Vec2(0,0);
  Tyra::Vec2 Pposcons = Tyra::Vec2(0,0);
  float  vel = 2, anm = 0;
  int direction = 1, dircons = 1, mapid = 0, mapcons = 0 , GameState = 0, mapspawn = 0;
  int TEvent = 0;
  bool moving, texset = false, anmt = false, standing = true , Tbool = false;
  bool mapdone = false, action = false;
  
  void loadsprites();
  void loadtextures();
  void reloadplayer();
  void startplayer();
  void mapinit();
  void camupdate();
  void transition();
  void battlestart(int, int);
  void dialogue(Tyra::Vec4, int);
  void event(int);
  
  Tyra::Texture* colview;

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
Tyra::Vec4 colact[100] = {};

void setcolissioninmap(float X1, float Y1, float X2, float Y2);
void resetcolissioninmap();
void colcheck();
void mapchange();

Tyra::Texture* dialogebox;
Tyra::Sprite Spritebox;
Tyra::Texture* letters[40] = {};
Tyra::Texture* getletter(std::string);
void fontunload();
void fontload(int);
std::string str;
Tyra::Vec2 texformat[200] = {};
int chatnumb = 0, hom = 0, tipechat = 0;
void drawtext();
  };
}  // namespace Racer
