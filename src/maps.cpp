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
    map1.size = Vec2(512, 512);
    map2.size = Vec2(512, 512);
    map3.size = Vec2(512, 512);
    map4.size = Vec2(512, 512);
    map5.size = Vec2(512, 512);
        if (mapid == 0)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");

        setcolissioninmap(-248, -268, 26, -216);//0
        setcolissioninmap(-28, -226, 20, -194);//1
        setcolissioninmap(8, -200, 26, -122);//2
        setcolissioninmap(26, -136, 340, -122);//3
        setcolissioninmap(370, -140, 416, -114);//4
        setcolissioninmap(388, -132, 410, -72);//5
        setcolissioninmap(-10, -86, 398, -74);//6
        setcolissioninmap(-256, -270, -206, -200);//7
        setcolissioninmap(-262, -210, -236, -84);//8
        setcolissioninmap(-252, -110, -218, -88);//9
        setcolissioninmap(-234, -88, -196, -66);//10
        setcolissioninmap(-214, -66, -174, -46);//11
        setcolissioninmap(-196, -48, -36, -36);//12
        setcolissioninmap(-50, -68, -24, -42);//13
        setcolissioninmap(-32, -84, 12, -60);//14
        setcolissioninmap(334, -134, 374, -134);
        
        for (int i = 0; i < 15; i++){ colact[i].x = 0; }
        colact[15].x = 1;
        colact[15].y = 1;
        colact[15].z = 0;

        if (mapspawn == 0){ Ppos = Vec2(-116, -134); }
        if (mapspawn == 1){ Ppos = Vec2(354, -118); }

    
    
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

        setcolissioninmap(-170, 124, -24, 142);//0
        setcolissioninmap(-142, -148, -60, -124);//1
        setcolissioninmap(-84, -178, 40, 184);//2
        setcolissioninmap(-214, -168, -124, 188);//3
        if (TEvent == 0){setcolissioninmap(-122, 46, 86, 56);}//4
        // setcolissioninmap(4, 68, -54, 106);//5
        // setcolissioninmap(108, -166, -14, 96);//6
        // setcolissioninmap(-348, -162, -190, 136);//7
        // setcolissioninmap(10, -186, -78, -110);//8
        //setcolissioninmap(-252, -110, -218, -88);//9
        //setcolissioninmap(-234, -88, -196, -66);//10
        //setcolissioninmap(-214, -66, -174, -46);//11
        //setcolissioninmap(-196, -48, -36, -36);//12
        //setcolissioninmap(-50, -68, -24, -42);//13
        //setcolissioninmap(-32, -84, 12, -60);//14
        
        colact[0].x = 1;
        colact[0].y = 0;
        colact[0].z = 1;
        
        colact[1].x = 1;
        colact[1].y = 2;
        colact[1].z = 0;

        colact[2].x = 0;
        colact[3].x = 0;

        colact[4].x = 2;
        colact[4].y = 0;
        colact[4].z = 0;
        
        
        if (mapspawn == 0){Ppos = Vec2(-106, 116);}
        if (mapspawn == 1){Ppos = Vec2(-104, -98);}

    
    
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

        setcolissioninmap(-144, 164, -32, 204);//0
        setcolissioninmap(-130, -186, -82, -172);//1
        
        colact[0].x = 1;
        colact[0].y = 1;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 3;
        colact[1].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-106, 148);}
        if (mapspawn == 1){Ppos = Vec2(-104, -156);}

    
    
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

        setcolissioninmap(-130, -58, -72, -38);//0
        setcolissioninmap(-156, -228, -84, -210);//1
        setcolissioninmap(-248, -120, 74, -86);//2
        
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

        setcolissioninmap(-152, -56, -90, -36);//0
        setcolissioninmap(456, -148, 486, -80);//1
        event(3);
        
        colact[0].x = 1;
        colact[0].y = 3;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 5;
        colact[1].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-126, -80);}
        if (mapspawn == 1){Ppos = Vec2 (446, -128);}
    
    
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

        setcolissioninmap(-274, -156, -240, -84);//0
        setcolissioninmap(-142, -240, -72, -224);//1
        setcolissioninmap(-72, -186, -38, -162);//2
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

        

        if (mapspawn == 0){Ppos = Vec2(-234, -130);}
        if (mapspawn == 1){Ppos = Vec2(-104, -186);}

    
    
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

        setcolissioninmap(-136, -66, -68, -38);//0
        setcolissioninmap(910, -192, 954, -118);//1
        setcolissioninmap(-254, -286, -218, -46);//2
        setcolissioninmap(-250, -88, -118, -14);//3
        setcolissioninmap(-92, -88, 486, -14);//4
        setcolissioninmap(-248, -230, 150, -202);//5
        setcolissioninmap(126, -206, 278, -160);//6
        setcolissioninmap(124, -130, 224, -80);//7
        setcolissioninmap(244, -208, 422, -120);//8
        setcolissioninmap(448, -106, 954, -64);//9
        setcolissioninmap(846, -146, 964, -40);//10
        setcolissioninmap(396, -220, 584, -142);//11
        setcolissioninmap(564, -220, 968, -178);//12
        setcolissioninmap(258, -130, 286, -80);//13
        
        
        colact[0].x = 1;
        colact[0].y = 5;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 7;
        colact[1].z = 0;

        colact[13].x = 3;
        colact[13].y = 1;
        colact[13].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-106, -82);}
        if (mapspawn == 1){Ppos = Vec2(900, -170);}
    
    
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

        setcolissioninmap(-286, -204, -246, -126);//0
        setcolissioninmap(2200, -200, 2234, -106);//1
        setcolissioninmap(2172, -146, 2238, -68);//2
        setcolissioninmap(2172, -180, 2238, -180);//3
        setcolissioninmap(-268, -252, 2236, -200);//4
        setcolissioninmap(-298, -106, 2230, -88);//5
        setcolissioninmap(-282, -260, -220, -180);//6
        setcolissioninmap(-282, -150, -220, -82);//7
        
        
        colact[0].x = 1;
        colact[0].y = 6;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 8;
        colact[1].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-232, -170);}
        if (mapspawn == 1){Ppos = Vec2(2190, -162);}
    
    
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

        setcolissioninmap(-276, -208, -240, -116);//0
        setcolissioninmap(30, 36, 62, 138);//1
        setcolissioninmap(-140, -226, -68, -214);//2
        setcolissioninmap(-14, -268, 82, 64);//3
        setcolissioninmap(-278, -244, -196, -184);//4
        setcolissioninmap(-278, -148, -196, 178);//5
        setcolissioninmap(-226, 134, 40, 166);//6
        setcolissioninmap(-16, 94, 88, 158);//7
        setcolissioninmap(-224, -230, -118, -200);//8
        setcolissioninmap(84, -192, -94, -198);//9


        setcolissioninmap(-172, -198, -136, -174);//10
        
        
        colact[0].x = 1;
        colact[0].y = 7;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 10;
        colact[1].z = 0;
        
        colact[2].x = 1;
        colact[2].y = 9;
        colact[2].z = 0;

        colact[10].x = 3;
        colact[10].y = 2;
        colact[10].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-234, -170);}
        if (mapspawn == 1){Ppos = Vec2(-108, -198);}
        if (mapspawn == 2){Ppos = Vec2(26, 70);}

    
    
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

        setcolissioninmap(-136, -66, -68, -38);//0
        // setcolissioninmap(0, 0, 0, 0);//1
        // setcolissioninmap(-254, -286, -218, -46);//2
        // setcolissioninmap(-250, -88, -118, -14);//3
        // setcolissioninmap(-92, -88, 486, -14);//4
        // setcolissioninmap(-248, -230, 150, -202);//5
        // setcolissioninmap(126, -206, 278, -160);//6
        
        
        colact[0].x = 1;
        colact[0].y = 8;
        colact[0].z = 1;


        if (mapspawn == 0){Ppos = Vec2(-106, -82);}

    
    
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
  colpos[i] = Tyra::Vec4(0,0,0,0);
    }
    for (int i = 0; i <= 100; i++){
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
