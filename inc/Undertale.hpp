#pragma once

#include <tyra>

namespace tale {
  using namespace Tyra;

class Enemyinfo
{
public:
  int att = 0;
  int def = 0;
  std::string encountertex = "...";
  std::string check = "...";
  std::string neutral1 = "...";
  std::string neutral2 = "...";
  std::string textpath = "...";
  std::string musicpath = "...";

};


class tale : public Game {
 public:
  tale(Engine* engine);
  ~tale();

  void init();
  void loop();

 private:
  int GameState = 1, GameStatecons = 0;
  Engine* engine;
  Sprite player, map1, map2, map3, map4, map5, trans;
  Vec2 Ppos = Vec2(0,0);
  Vec2 Pposcons = Vec2(0,0);
  float chatnumb = 0, vel = 2, anm = 0;
  int direction = 1, dircons = 1, mapid = 0, mapcons = 0, mapspawn = 0;
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
  void dialogue(Vec4, int);
  void event(int);
  void maptheme();


  Texture* colview;
  Texture* transtexture;

  Texture* ptex1;Texture* pmtex1;Texture* pmtex5;
  Texture* ptex2;Texture* pmtex2;Texture* pmtex6;
  Texture* ptex3;Texture* pmtex3;Texture* pmtex7;
  Texture* ptex4;Texture* pmtex4;Texture* pmtex8;

int NumOfCol = 0;
Vec4 colpos[100] = {};
Vec4 colact[100] = {};

void setcolissioninmap(float X1, float Y1, float X2, float Y2);
void resetcolissioninmap();
void colcheck();
void mapchange();

Texture* dialogebox;
Sprite UI_ChatboxSprite, UI_FaceboxSprite, UI_LetterSprite;
Texture* letters[57] = {};
Texture* getletter(std::string, int);
void fontunload();
void fontload(int);
std::string str;
Vec2 texformat[200] = {};
int hom = 0, tipechat = 0,blt1 = 9999, blt2 = 9999, lbp = 0, bdp = 0;
void drawtext();
bool breakdialoge = false;

int music = 99999;

//Battle system

void Battle(Enemyinfo);
int BattleMenuState = 0;
int turns = 0, option = 1;
Sprite UI_battleicons;
Texture* fight1;
Texture* fight2;
Texture* act1;
Texture* act2;
Texture* itens1; 
Texture* itens2;
Texture* mercy1; 
Texture* mercy2;  
audsrv_adpcm_t* e;

  };
}
