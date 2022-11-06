#pragma once

#include <tyra>

namespace tale {
  using namespace Tyra;

class Instance
{
public:
  Vec2 Pos;
  int id, dir = 0, dircons = 0;
  bool direnable = false;
  Sprite ins_sprite;
  Texture* texture;
  Texture* texture1;
  Texture* texture2;
  Texture* texture3;
};



class Enemyinfo
{
public:
  std::string name = "...";
  int att = 0;int def = 0, maxhp = 10, currhp = maxhp;
  Vec2 Epos = Vec2(200 ,96);
  int mtion1 = 9999; bool mtiongreat1 = true;
  int mtion2 = 9999; bool mtiongreat2 = true;
  bool mercy = false;
  std::string encountertex = "...";
  std::string check = "...";
  std::string neutral1 = "..."; std::string neutral2 = "...";
  std::string spech1 = "...", spech2 = "...", spech3 = "...";
  std::string textpath = "..."; std::string musicpath = "...";
  std::string dmgtextpath = "...";std::string adcdiag = "...";
  int specialcontition = -1;
  int numactoptions = 0;
  std::string actoption[5] = {"...","...","...","...","..."};
  std::string actaction[5] = {"...","...","...","...","..."};
  int actoptionchange[5] = {};
  bool hostile = true;
  int attackid1, attackid2, attackid3;
};
class Pweapown
{
public:
std::string name = "...";
int dmg = 0;
};

class tale : public Game {
 public:
  tale(Engine* engine);
  ~tale();

  void init();
  void loop();

 private:
  int GameState = 0, GameStatecons = 0;
  Engine* engine;
  Sprite player, map1, map2, map3, map4, map5, trans;
  Vec2 Ppos = Vec2(0,0);
  Vec2 Pposcons = Vec2(0,0);
  float  vel = 4, anm = 0;
  int TEvent = 0;
  int direction = 1, dircons = 1, mapid = 0, chatnumb = 0, mapcons = 0, mapspawn = 0;
  bool moving, texset = false, anmt = false, standing = true , Tbool = false;
  bool mapdone = false, action = false;
  Vec4 camborder = Vec4(-9999, -9999, 9999, 9999);
  bool placeholderfixtape1 = false;
  bool widescreenmode = false;
  
  void loadsprites();
  void loadtextures();
  void reloadplayer();
  void startplayer();
  void mapinit();
  void camupdate();
  void transition();
  void battlestart(int);
  void event(int);
  void maptheme();
  void chatstart(int);


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
Texture* getdmgletter(std::string, int);
void fontunload();
void fontload(int);
std::string str;
Vec2 texformat[200] = {};
int hom = 0, tipechat = 0,blt1 = 9999, blt2 = 9999, lbp = 0, bdp = 0;
void drawtext();
bool breakdialoge = false, sontiming = false, curtalk = true;
int music = 99999;
int getavailablechanel();
int currentchannel = 0;

//Battle system

void skipturn();
void battleexit();
void Battle();
void SpareEnemy();
int BattleMenuState = 0, BattleMenuStatecons = 0;
int turns = 0, option = 1, suboption = 1, attpointer = 0, attanm1 = 0, attanm2 = 0, dmggiven = 0;
bool attacked = false, showenemy = true;
int lastbended = 0, talkanm = 0;
Enemyinfo Enemy;
Sprite UI_battleicons, UI_HealthBar, PlayerHeart, attpointer_sprite, attanm_sprite, UI_chatbubble;
Texture* fight1;Texture* fight2;
Texture* act1;  Texture* act2;
Texture* itens1;Texture* itens2;
Texture* mercy1;Texture* mercy2;  
Texture* YHbox; Texture* RHbox; Texture* GHbox;
Texture* damageindicator; Texture* dmgpointer1; Texture* dmgpointer2;
Texture* heart1;Texture* heart2;
audsrv_adpcm_t* texnoise;
audsrv_adpcm_t* menuoptionoise;
audsrv_adpcm_t* attacknoise;
audsrv_adpcm_t* hitnoise;
audsrv_adpcm_t* monsdiednoise;
audsrv_adpcm_t* runawaynoise;
Texture* anm_attack1;Texture* anm_attack2;
Texture* anm_attack3;Texture* anm_attack4;
Texture* anm_attack5;
Texture* enm_body1;
Texture* enm_bodydmg;
Texture* chatbubble;
Texture* facetexture1; Texture* facetexture2;

//instances
Instance instances[100];
int InstanceCount = 0;
Vec2 insttexmap;
void setinstance(Vec2, int id);
void removeinstances();
void drawinstances();
void draw_instance(int ID);

//instance animation

int mapcuranm = 0;
int instancepath = 0;
int instmaxpath = 0;
void instmove(int, int, int);

//Status

std::string Pname = "Frisk";
int LOVE = 1;
int atk = 0;
int def = 0;
int EXP = 0;
int Maxhp = 20;
int currenthp = 20;
Pweapown weap;

//Timeline

int TL_Dummy = 0;

  };



}
