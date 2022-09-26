#pragma once

#include <tyra>

namespace tale {
  using namespace Tyra;

class Enemyinfo
{
public:
  int att = 0;int def = 0;
  Vec2 Epos = Vec2(200 ,96);
  int mtion1 = 9999; bool mtiongreat1 = true;
  int mtion2 = 9999; bool mtiongreat2 = true;
  bool mercy = false;
  std::string encountertex = "...";
  std::string check = "...";
  std::string neutral1 = "..."; std::string neutral2 = "...";
  std::string spech1 = "...", spech2 = "...", spech3 = "...";
  std::string textpath = "..."; std::string musicpath = "...";
  int specialcontition = 0;
  int numactoptions = 0;
  std::string actoption[5] = {"...","...","...","...","..."};
  int actoptionchange[5] = {};
  
  
  
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
Texture* letters[100] = {};
Texture* getletter(std::string, int);
void fontunload();
void fontload(int);
std::string str;
Vec2 texformat[200] = {};
int hom = 0, tipechat = 0,blt1 = 9999, blt2 = 9999, lbp = 0, bdp = 0;
void drawtext();
bool breakdialoge = false, sontiming = false;
int music = 99999;

//Battle system

void Battle();
void SpareEnemy();
int BattleMenuState = 0, BattleMenuStatecons = 0;
int turns = 0, option = 1, suboption = 1;
bool spareable;
Enemyinfo Enemy;
Sprite UI_battleicons, UI_HealthBar, PlayerHeart;
Texture* fight1;Texture* fight2;
Texture* act1;  Texture* act2;
Texture* itens1;Texture* itens2;
Texture* mercy1;Texture* mercy2;  
Texture* YHbox; Texture* RHbox;
Texture* heart1;Texture* heart2;
audsrv_adpcm_t* texnoise;
audsrv_adpcm_t* menuoptionoise;

//Status

std::string Pname = "Frisk";
int LOVE = 1;
int EXP = 0;
int Maxhp = 20;
int currenthp = 20;

  };
}
