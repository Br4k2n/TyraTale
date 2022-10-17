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
    if (widescreenmode)
    {
    map1.size = Vec2(384 * 2, 512 * 2);
    map2.size = Vec2(384 * 2, 512 * 2);
    map3.size = Vec2(384 * 2, 512 * 2);
    map4.size = Vec2(384 * 2, 512 * 2);
    map5.size = Vec2(384 * 2, 512 * 2);
    player.size = Vec2(24 * 2, 32 * 2);
    }
    else
    {
    map1.size = Vec2(512 * 2, 512 * 2);
    map2.size = Vec2(512 * 2, 512 * 2);
    map3.size = Vec2(512 * 2, 512 * 2);
    map4.size = Vec2(512 * 2, 512 * 2);
    map5.size = Vec2(512 * 2, 512 * 2);
    player.size = Vec2(32 * 2, 32 * 2);
    }
    camborder = Vec4(-9999, -9999, 9999, 9999);
        if (mapid == 0)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");

        if (!widescreenmode){
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
        }

        if (widescreenmode){

        setcolissioninmap(-252, -238, -168, -144);//0
        setcolissioninmap(-210, -218, 130, -180);//1
        setcolissioninmap(76, -216, 180, -140);//2
        setcolissioninmap(136, -178, 638, 16);//3
        setcolissioninmap(674, -28, 734, 20);//4
        setcolissioninmap(706, -80, 744, 120);//5
        setcolissioninmap(78, 80, 762, 150);//6
        setcolissioninmap(44, 122, 112, 182);//7
        setcolissioninmap(-190, 158, 94, 192);//8
        setcolissioninmap(-202, 118, -136, 190);//9
        setcolissioninmap(-224, 80, -164, 118);//10
        setcolissioninmap(-258, 38, -196, 82);//11
        setcolissioninmap(-266, -156, -224, 40);//12
        setcolissioninmap(156, 162, 76, 90);//13
        setcolissioninmap(584, -180, 746, -12);//14
        
        colact[14].x = 1;
        colact[14].y = 1;
        colact[14].z = 0;

        if (mapspawn == 0){ Ppos = Vec2(-42, -28); }
        if (mapspawn == 1){ Ppos = Vec2(656, 14); }
        }
    
    
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

        if (!widescreenmode)
        {
            camborder = Vec4(46, -9999, 46, 9999);
        setcolissioninmap(-78, 612, 186, 640);//0
        setcolissioninmap(-34, -32, 178, 8);//1
        setcolissioninmap(70, -16, 126, 756);//2
        setcolissioninmap(-70, -24, 26, 768);//3
        setcolissioninmap(-110, 416, 270, 460);
        
        
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
        }
        if (widescreenmode)
        {
        setcolissioninmap(-182, 568, 146, 606);//0
        setcolissioninmap(-170, -74,286, 30);//1
        setcolissioninmap(-12, -84, 282, 792);//2
        setcolissioninmap(-166, -104, -72, 660);//3
        setcolissioninmap(-212, 410, 222, 420);//4
        
        
        
        
        colact[0].x = 1;
        colact[0].y = 0;
        colact[0].z = 1;
        
        colact[1].x = 1;
        colact[1].y = 2;
        colact[1].z = 0;

        colact[4].x = 2;
        colact[4].y = 0;
        colact[4].z = 0;
        
        if (mapspawn == 0){Ppos = Vec2(-26, 554);}
        if (mapspawn == 1){Ppos = Vec2(-32, 42);}
        }
    
    
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

        if (!widescreenmode)
        {
            camborder = Vec4(38, 40, 90, 504);
        setcolissioninmap(-10, 580, 118, 640);//0
        setcolissioninmap(-6, -112, 102, -72);//1
        
        colact[0].x = 1;
        colact[0].y = 1;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 3;
        colact[1].z = 0;

        if (mapspawn == 0){Ppos = Vec2(42, 552);}
        if (mapspawn == 1){Ppos = Vec2(46, -60);}
        }
        if (widescreenmode)
        {
        setcolissioninmap(-78, 582, 50, 674);//0
        setcolissioninmap(-54, -84, -10, -68);//1
        setcolissioninmap(-14, 518, 198, 654);//2
        setcolissioninmap(-274, 518, -46, 654);//3
        setcolissioninmap(-254, 442, -78, 606);//4
        setcolissioninmap(14, 442, 206, 606);//5
        setcolissioninmap(106, 90, 190, 574);//6
        setcolissioninmap(-258, 90, -166, 574);//7
        setcolissioninmap(-262, -282,-198, 122);//8
        setcolissioninmap(134, -282, 214, 122);//9
        setcolissioninmap(-200, -148, 137, -68);//10
        
        colact[0].x = 1;
        colact[0].y = 1;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 3;
        colact[1].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-106, 148);}
        if (mapspawn == 1){Ppos = Vec2(-104, -156);}
        }
    
    
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

        if (!widescreenmode)
        {
            camborder = Vec4(66, 24, 66, 24);
        setcolissioninmap(-10, 140, 102, 164);//0
        setcolissioninmap(-34, -184, 54, -156);//1
        setcolissioninmap(-266, 48, 378, 84);//2
        
        colact[0].x = 1;
        colact[0].y = 2;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 4;
        colact[1].z = 0;

        colact[2].x = 2;
        colact[2].y = 2;
        colact[2].z = 0;

        if (mapspawn == 0){Ppos = Vec2(42, 116);}
        if (mapspawn == 1){Ppos = Vec2(6, -140);}

        }
        if (widescreenmode)
        {
        setcolissioninmap(-58, 140, 18, 176);//0
        setcolissioninmap(-90, -184, -22, -160);//1
        setcolissioninmap(-234, 32, 194, 84);//2
        
        colact[0].x = 1;
        colact[0].y = 2;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 4;
        colact[1].z = 0;

        colact[2].x = 2;
        colact[2].y = 2;
        colact[2].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-106, -72);}
        if (mapspawn == 1){Ppos = Vec2(-126, -194);}

        }
    
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
        if (!widescreenmode)
        {
            camborder = Vec4(70, 24, 962, 24);
        setcolissioninmap(-58, 144, 62, 176);//0
        setcolissioninmap(1174, -52, 1214, 80);//1
        event(3);
        
        colact[0].x = 1;
        colact[0].y = 3;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 5;
        colact[1].z = 0;

        if (mapspawn == 0){Ppos = Vec2(6, 96);}
        if (mapspawn == 1){Ppos = Vec2 (1150, -4);}
        }
    
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

        if (!widescreenmode)
        {
            camborder = Vec4(6, 14, 62, 14);
        setcolissioninmap(-298, -54, -234, 90);//0
        setcolissioninmap(-22, -198, 106, -158);//1
        setcolissioninmap(106, -106, 178, -62);//2
        event(4);
        
        colact[0].x = 1;
        colact[0].y = 4;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 6;
        colact[1].z = 0;

        colact[2].x = 3;
        colact[2].y = 0;
        colact[2].z = 0;

        

        if (mapspawn == 0){Ppos = Vec2(-210, -10);}
        if (mapspawn == 1){Ppos = Vec2(46, -138);}

        }
    
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

        if (!widescreenmode)
        {
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
        setcolissioninmap(-4364, 82, -3800, 106);//13
        
        
        colact[0].x = 1;
        colact[0].y = 5;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 7;
        colact[1].z = 0;

        colact[9].x = 3;
        colact[9].y = 1;
        colact[9].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-4052, 98);}
        if (mapspawn == 1){Ppos = Vec2(-2032, -86);}
        }
    
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

        if (!widescreenmode)
        {
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
        }
    
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

        if (!widescreenmode)
        {
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

        }
    
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

        if (!widescreenmode)
        {
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
        }
    
    
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
}
