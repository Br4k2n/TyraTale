#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::mapinit()
{
    map1.mode = SpriteMode::MODE_STRETCH;
    map2.mode = SpriteMode::MODE_STRETCH;
    map3.mode = SpriteMode::MODE_STRETCH;
    map4.mode = SpriteMode::MODE_STRETCH;
    map5.mode = SpriteMode::MODE_STRETCH;
    
    map1.size = Vec2(512 * 2, 512 * 2);
    map2.size = Vec2(512 * 2, 512 * 2);
    map3.size = Vec2(512 * 2, 512 * 2);
    map4.size = Vec2(512 * 2, 512 * 2);
    map5.size = Vec2(512 * 2, 512 * 2);
    player.size = Vec2(32 * 2, 32 * 2);
    
    camborder = Vec4(-9999, -9999, 9999, 9999);
        if (mapid == 0)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");

        camborder = Vec4(12, 60, 828, 60);
        setcolissioninmap(-300, -212, -140, -144);//0
        setcolissioninmap(-188, -216,340, -184);//1
        setcolissioninmap(184, -208,324, -144);//2
        setcolissioninmap(264, -180, 940, 16);//3
        setcolissioninmap(980, -64, 1104, 16);//4
        setcolissioninmap(1028, -40, 1084, 140);//5
        setcolissioninmap(188, 80,1072, 160);//6
        setcolissioninmap(152, 120,248, 204);//7
        setcolissioninmap(-152, 160,228, 196);//8
        setcolissioninmap(-188, 120, -100, 204);//9
        setcolissioninmap(-212, 84,-136, 124);//10
        setcolissioninmap(-260, 36,-180, 80);//11
        setcolissioninmap(-288, -200,-216, 72);//12
        setcolissioninmap(888, -88, 1032, -16);//13     
        
        colact[13].x = 1;
        colact[13].y = 1;
        colact[13].z = 0;

        if (mapspawn == 0){ Ppos = Vec2(28, -28); }
        if (mapspawn == 1){ Ppos = Vec2(968, 24); }
    
    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }

    if (mapid == 1)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_2.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_2.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_2.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_2.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_2.png");

        camborder = Vec4(46, -9999, 46, 9999);
        setcolissioninmap(-78, 612, 186, 640);//0
        setcolissioninmap(-34, -32, 178, 8);//1
        setcolissioninmap(70, -16, 126, 756);//2
        setcolissioninmap(-70, -24, 26, 768);//3
        setcolissioninmap(-110, 400, 270, 420);
        if (TEvent == 0) setinstance(Vec2(42, 315), 0);   
        
        colact[0].x = 1;
        colact[0].y = 0;
        colact[0].z = 1;
        
        colact[1].x = 1;
        colact[1].y = 2;
        colact[1].z = 0;


        colact[4].x = 2;
        colact[4].y = 0;
        colact[4].z = 0;
        
        if (mapspawn == 0){Ppos = Vec2(46, 584);}
        if (mapspawn == 1){Ppos = Vec2(46, 28);}
    
    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }
    
    if (mapid == 2)
        {
            
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_3.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_3.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_3.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_3.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_3.png");

        
        camborder = Vec4(38, 40, 90, 504);
        setcolissioninmap(-10, 580, 118, 640);//0
        setcolissioninmap(-6, -112, 102, -72);//1

        setcolissioninmap(-250, -120, -174, 272);//2
        setcolissioninmap(-242, 84, -138, 504);//3
        setcolissioninmap(230, 84, 300, 504);//4

        setcolissioninmap(-294, 444, -22, 548);//5
        setcolissioninmap(106, 444, 362, 548);//6
        setcolissioninmap(-50, 524, 26, 700);//7
        setcolissioninmap(70, 524, 200, 700);//8
        setcolissioninmap(270, -148, 374, 524);//9
        setcolissioninmap(-170, -112, 314, -72);//10
        setcolissioninmap(-126, -32, 218, 8);//11

        setcolissioninmap(-18, 500, 102, 516);//12
        setcolissioninmap(-134, 348, 226, 404);//13
        setcolissioninmap(-134, 120, 226, 216);//14

        setcolissioninmap(-170, 12, 266, 28);//15

        colact[12].x = 2;
        colact[12].y = 2;

        colact[13].x = 2;
        colact[13].y = 3;

        colact[14].x = 2;
        colact[14].y = 4;
        
        colact[15].x = 2;
        colact[15].y = 5;
        
        if (TEvent == 2) setinstance(Vec2(26, 384), 1);   
        if (TEvent == 3) setinstance(Vec2(26, 284), 1);   
        if (TEvent == 4) setinstance(Vec2(150, 76), 1);  
        if (TEvent == 5) setinstance(Vec2(234, -68), 1);  
    
        colact[0].x = 1;
        colact[0].y = 1;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 3;
        colact[1].z = 0;

        if (mapspawn == 0){Ppos = Vec2(42, 552);}
        if (mapspawn == 1){Ppos = Vec2(46, -60);}
        
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }

    if (mapid == 3)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_4.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_4.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_4.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_4.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_4.png");

        
        camborder = Vec4(66, 24, 66, 24);
        setcolissioninmap(-10, 124, 102, 164);//0
        setcolissioninmap(-34, -184, 54, -156);//1
        setcolissioninmap(-266, 48, 378, 84);//2

        setcolissioninmap(-246, -204, 362, -156);//3
        setcolissioninmap(186, -180, 322, -104);//4
        setcolissioninmap(226, -136, 362, -64);//5
        setcolissioninmap(266, -144, 54, 184);//6
        setcolissioninmap(-206, -192, -134, -108);//7
        setcolissioninmap(-242, -172, -178, 168);//8
        setcolissioninmap(-174, 123, 314, 164);//9
        setcolissioninmap(266, -60, 358, 168);//10
        setcolissioninmap(226, 44, 330, 84);//11
        setcolissioninmap(190, 84, 298, 120);//12
        setcolissioninmap(-174, 84, -58, 120);//13
        setcolissioninmap(-110, -152, -74, -152);//14
        
        setinstance(-15, -220, 3);//0
        
        setinstance(110, -48, 2);//1
        setinstance(186, -48, 2);//2
        setinstance(150, -8, 2);//3
        setinstance(110, 32, 2);//4
        setinstance(186, 32, 2);//5
        setinstance(150, 72, 2);//6
        if (TEvent == 6) setinstance(22, -52, 1);//7


        colact[0].x = 1;
        colact[0].y = 2;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 4;

        colact[2].x = 2;
        colact[2].y = 6;

        colact[14].x = 4;
        colact[14].y = 0;

        if (mapspawn == 0){Ppos = Vec2(42, 116);}
        if (mapspawn == 1){Ppos = Vec2(6, -140);}

        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }
    if (mapid == 4)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_5a.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_5b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");

        camborder = Vec4(70, 24, 962, 24);
        setcolissioninmap(-58, 144, 62, 176);//0
        setcolissioninmap(1174, -52, 1214, 80);//1

        setcolissioninmap(-218, -188, 1154, -148);//2
        setcolissioninmap(1106, -192, 1200, -24);//3
        setcolissioninmap(1106, 44, 1238, 180);//4
        setcolissioninmap(30, 120, 1206, 160);//5
        setcolissioninmap(190, 40, 298, 160);//6
        setcolissioninmap(190, -172, 298, -24);//7
        setcolissioninmap(674, -164, 778, -24);//8
        setcolissioninmap(674, 44, 778, 164);//9
        setcolissioninmap(-30, -76, 42, -20);//10
        setcolissioninmap(-35, -82, 46, -15);//11
        setcolissioninmap(-70, -144, -26, -144);//12
        setcolissioninmap(-262, 120, -18, 120);//13
        setcolissioninmap(-270, -256, -174, 116);//14

        setinstance(534, -136, 4);
        if (TEvent > 9) instances[0].dir = 1; 
        setinstance(942, -136, 4);
        if (TEvent > 10) instances[1].dir = 1; 

        setinstance(1014, -136, 4);

        setcolissioninmap(510, -144, 550, -144);//15
        colact[15].x = 4;
        colact[15].y = 6;

        setcolissioninmap(918, -144, 960, -144);//16
        colact[16].x = 4;
        colact[16].y = 7;

        setcolissioninmap(830, -144, 882, -144);//17
        colact[17].x = 4;
        colact[17].y = 9;
        setcolissioninmap(434, -144, 482, -144);//18
        colact[18].x = 4;
        colact[18].y = 8;
        setcolissioninmap(982, -144, 1030, -144);//19
        colact[19].x = 4;
        colact[19].y = 10;

        if (TEvent == 8 ) {setinstance(58, -32, 1); instmove(1, 0);}
        if (TEvent == 9 ) {setinstance(654, -32, 1);  instmove(1, 3);}
        if (TEvent == 10 ) {setinstance(1094, -32, 1);  instmove(1, 3);}
        
        if (TEvent == 9) {setcolissioninmap(618, -36, 790, 52);}
        if (TEvent == 10) {setcolissioninmap(1058, -32, 1200, 52);}
        event(8);
        
        colact[0].x = 1;
        colact[0].y = 3;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 5;

        colact[11].x = 4;
        colact[11].y = 2;

        colact[12].x = 4;
        colact[12].y = 1;

        if (mapspawn == 0){Ppos = Vec2(6, 96);}
        if (mapspawn == 1){Ppos = Vec2 (1150, -4);}
        
    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }

    if (mapid == 5)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_6.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_5b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");

        
        camborder = Vec4(6, 14, 62, 14);
        setcolissioninmap(-298, -54, -234, 90);//0
        setcolissioninmap(-22, -198, 106, -158);//1
        setcolissioninmap(106, -106, 178, -62);//2
        setcolissioninmap(-318, -78, -174, -30);//3
        setcolissioninmap(-214, -142, -138, -66);//4
        setcolissioninmap(-186, -166, -98, -106);//5
        setcolissioninmap(-174, -194, 26, -150);//6
        setcolissioninmap(66, -194, 282, -150);//7
        setcolissioninmap(186, -182, 314, -110);//8
        setcolissioninmap(258, -114, 334, 158);//9
        setcolissioninmap(226, 42, 346, 162);//10
        setcolissioninmap(190, 82, 330, 202);//11
        setcolissioninmap(-226, 122, 318, 166);//12
        setcolissioninmap(-210, 82, -94, 170);//13
        setcolissioninmap(-300, 42, -138, 78);//14
        setcolissioninmap(230, -106, 254, -66);//15

        setcolissioninmap(110, -130, 178, -66);//16
        if (TL_Dummy != 1) setcolissioninmap(100, -140, 188, -56);//17
        else setcolissioninmap(0, 0, 0, 0);//17
        colact[17].x = 4;
        colact[17].y = 11;
        setinstance(146, -70, 5);
        event(12);
        
        
        colact[0].x = 1;
        colact[0].y = 4;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 6;

        colact[2].x = 2;
        colact[2].y = 5;

        

        if (mapspawn == 0){Ppos = Vec2(-210, -10);}
        if (mapspawn == 1){Ppos = Vec2(46, -138);}
    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }
    if (mapid == 6)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_7a.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_7b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_7c.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");

        camborder = Vec4(-4032, 22, -2212, 22);
        setcolissioninmap(-4176, 126, -3964, 174);//0
        setcolissioninmap(-2020, -138, -1952, 50);//1
        setcolissioninmap(-4032, 82, -2604, 154);//2
        setcolissioninmap(-2952, 42, -2016, 122);//3
        setcolissioninmap(-2152, -42, -1928, 94);//4
        setcolissioninmap(-3520, -150, -1896, -102);//5
        setcolissioninmap(-3060, -100, -2675, -22);//6
        setcolissioninmap(-3348, -126, -2992, 18);//7
        setcolissioninmap(-3592, -2, -3392, 138);//8
        setcolissioninmap(-3308, -18, -3228, 146);//9
        setcolissioninmap(-3588, -186, -3320, -62);//10
        setcolissioninmap(-4328, -198, -3524, -146);//11
        setcolissioninmap(-4340, -210, -4272, 162);//12
        setcolissioninmap(-4364, 82, -4072, 106);//13

        setcolissioninmap(-3228, 10, -3120, 24);//14
        
        
        colact[0].x = 1;
        colact[0].y = 5;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 7;
        colact[1].z = 0;

        colact[9].x = 3;
        colact[9].y = 1;

        colact[14].x = 4;
        colact[14].y = 3;

        if (mapspawn == 0){Ppos = Vec2(-4052, 98);}
        if (mapspawn == 1){Ppos = Vec2(-2032, -86);}
    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }
    if (mapid == 7)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_8a.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_8b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_8c.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_8d.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_8e.png");

        camborder = Vec4(0, -26, 4472, -26);
        setcolissioninmap(4674, -154, 4762, 66);//0
        setcolissioninmap(4618, -190, 4800, -106);//1
        setcolissioninmap(4618, -34, 4754, 90);//2
        setcolissioninmap(-242, -178, 4674, -146);//3
        setcolissioninmap(-318, -42, -186, 114);//4
        setcolissioninmap(-314, -326, -186, -106);//5
        setcolissioninmap(-314, -138, -232, -30);//6
        setcolissioninmap(-234, 42, 4718, 98);//7
        
        
        colact[6].x = 1;
        colact[6].y = 6;
        colact[6].z = 1;

        colact[0].x = 1;
        colact[0].y = 8;
        colact[0].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-200, -90);}
        if (mapspawn == 1){Ppos = Vec2(4646, -86);}
        
    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }
    if (mapid == 8)
        {
            
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_9.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_9.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_9.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_9.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_9.png");

        camborder = Vec4(6, 10, 122, 418);
        setcolissioninmap(-322, -294, -134, -106);//0
        setcolissioninmap(-186, -278, 26, -142);//1
        setcolissioninmap(66, -234, 314, -146);//2
        setcolissioninmap(226, -226, 382, 378);//3
        setcolissioninmap(-274, -38, -134, 646);//4
        setcolissioninmap(-190, 518, 310, 570);//5
        setcolissioninmap(-326, -150, -222, 14);//6
        setcolissioninmap(-22, -218, 114, -166);//7
        setcolissioninmap(310, 358, 386, 486);//8
        setcolissioninmap(230, 442, 414, 598);//9

        colact[6].x = 1;
        colact[6].y = 7;
        colact[6].z = 1;

        colact[8].x = 1;
        colact[8].y = 10;
        colact[8].z = 0;
        
        colact[7].x = 1;
        colact[7].y = 9;
        colact[7].z = 0;

        colact[10].x = 3;
        colact[10].y = 2;
        colact[10].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-214, -86);}
        if (mapspawn == 1){Ppos = Vec2(46, -134);}
        if (mapspawn == 2){Ppos = Vec2(310, 394);}

    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }
    if (mapid == 9)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_10.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_10.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_8c.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_8d.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_8e.png");

        camborder = Vec4(46, 22, 46, 22);
        setcolissioninmap(-10, 126, 114, 194);//0
        setcolissioninmap(-166, -190, 262, -134);//1
        setcolissioninmap(110, -178, 214, 130);//2
        setcolissioninmap(70, 82, 186, 178);//3
        setcolissioninmap(-170, 82, 18, 186);//4
        setcolissioninmap(-150, -206, -22, 150);//4
        
        colact[0].x = 1;
        colact[0].y = 8;
        colact[0].z = 1;


        if (mapspawn == 0){Ppos = Vec2(42, 118);}
    
    
        auto* texture1 = engine->renderer.getTextureRepository().add(PPath1);
        auto* texture2 = engine->renderer.getTextureRepository().add(PPath2);
        auto* texture3 = engine->renderer.getTextureRepository().add(PPath3);
        auto* texture4 = engine->renderer.getTextureRepository().add(PPath4);
        auto* texture5 = engine->renderer.getTextureRepository().add(PPath5);
        texture1->addLink(map1.id);
        texture2->addLink(map2.id);
        texture3->addLink(map3.id);
        texture4->addLink(map4.id);
        texture5->addLink(map5.id);
    }

}

void tale::setcolissioninmap(float X1, float Y1, float X2, float Y2) 
    {
        colpos[NumOfCol] = Tyra::Vec4(X1,Y1, X2, Y2);
      NumOfCol++;
    };
void tale::resetcolissioninmap()
{
    for (int i = 0; i <= 100; i++){
  colpos[i] = Vec4(0,0,0,0);
  colact[i] = Vec4(0,0,0,0);
    }
    
  NumOfCol = 0;
}
void tale::colcheck()
{
    for (int i = 0; i < NumOfCol; i++)
    {
        bool xcol = false, ycol = false, pxcol = false, pycol = false;
        if (colpos[i].x <= Ppos.x && colpos[i].z >= Ppos.x)
        {
            xcol = true;
        }
        if (colpos[i].y <= Ppos.y && colpos[i].w >= Ppos.y)
        {
            ycol = true;
        }
        if (colpos[i].x <= Pposcons.x && colpos[i].z >= Pposcons.x)
        {
            pxcol = true;
        }
        if (colpos[i].y <= Pposcons.y && colpos[i].w >= Pposcons.y)
        {
            pycol = true;
        }

        if (xcol && ycol && !pxcol && pycol)
        {
            if (colact[i].x == 0) { Ppos.x = Pposcons.x;}
            if (colact[i].x == 1) { mapid = colact[i].y;  mapspawn = colact[i].z;}
            if (colact[i].x == 2 && !action) { event(colact[i].y);}
            if (colact[i].x == 3) {battlestart(colact[i].y);}

        }
        if (xcol && ycol && pxcol && !pycol)
        {
            if (colact[i].x == 0) { Ppos.y = Pposcons.y;}
            if (colact[i].x == 1) { mapid = colact[i].y; mapspawn = colact[i].z;}
            if (colact[i].x == 2 && !action) { event(colact[i].y);}
            if (colact[i].x == 3) {battlestart(colact[i].y);}
        }
        if (xcol && ycol && pxcol && pycol)
        {
            if (colact[i].x == 4 && !action) {if(engine->pad.getClicked().Cross){chatstart(colact[i].y);}}
        }
        
    }
    
  Pposcons = Ppos;
}
void tale::mapchange() {
if (mapid != mapcons && !mapdone) 
{
   Tbool = true;
}
}

void tale::maptheme()
{
    if (mapid >= 2 && music != 0)
    {
        music = 0;
        engine->audio.song.load(FileUtils::fromCwd("Sounds/Ruins.wav"));
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
    }
    if (mapid == 0 || mapid == 1)
    {
        engine->audio.song.stop();
        music = 99999;
    }       
}

bool tale::mapshake()
{
    camstatic = true;
    if (mapshakeanm == 0)
    {
        map1.position.x += 30;
        player.position.x += 30;
    }
    if (mapshakeanm == 10)
    {
        map1.position.x -= 60;
        player.position.x -= 60;

    }
    if (mapshakeanm == 20)
    {
        map1.position.x += 60;
        player.position.x += 60;

    }
    if (mapshakeanm == 30)
    {
        map1.position.x -= 60;
        player.position.x -= 60;

    }
    if (mapshakeanm == 40)
    {
        map1.position.x += 30;
        player.position.x += 30;

    }
    mapshakeanm++;
    if (mapshakeanm >= 60)
    {
        camstatic = false;
        mapshakeanm = 0;
        return false;
    }
    return true;
}
}
