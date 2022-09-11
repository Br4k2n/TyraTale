#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::mapinit()
{
        if (mapid == 0)
        {
        auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
        auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
        map1.mode = SpriteMode::MODE_STRETCH;
        map1.size = Vec2(512, 512);
        map1.position = Vec2(0,0);
        map2.mode = SpriteMode::MODE_STRETCH;
        map2.size = Vec2(512, 512);
        map2.position = Vec2(1024,0);

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
        map1.mode = SpriteMode::MODE_STRETCH;
        map1.size = Vec2(512, 512);
        map1.position = Vec2(0,0);

        setcolissioninmap(-170, 124, -24, 142);//0
        setcolissioninmap(-142, -148, -60, -124);//1
        //setcolissioninmap(8, -200, 26, -122);//2
        //setcolissioninmap(26, -136, 330, -122);//3
        //setcolissioninmap(370, -140, 416, -114);//4
        //setcolissioninmap(388, -132, 410, -72);//5
        //setcolissioninmap(-10, -86, 398, -74);//6
        //setcolissioninmap(-256, -270, -206, -200);//7
        //setcolissioninmap(-262, -210, -236, -84);//8
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
        map1.mode = SpriteMode::MODE_STRETCH;
        map1.size = Vec2(512, 512);
        map1.position = Vec2(0,0);

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
        map1.mode = SpriteMode::MODE_STRETCH;
        map1.size = Vec2(512, 512);
        map1.position = Vec2(0,0);

        setcolissioninmap(-130, -58, -72, -38);//0
        setcolissioninmap(-156, -228, -84, -210);//1
        
        colact[0].x = 1;
        colact[0].y = 2;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 4;
        colact[1].z = 0;

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
        map1.mode = SpriteMode::MODE_STRETCH;
        map1.size = Vec2(512, 512);
        map1.position = Vec2(0,0);

        setcolissioninmap(-152, -56, -90, -36);//0
        setcolissioninmap(456, -148, 486, -80);//1
        
        
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
        map1.mode = SpriteMode::MODE_STRETCH;
        map1.size = Vec2(512, 512);
        map1.position = Vec2(0,0);

        setcolissioninmap(-274, -156, -240, -84);//0
        //setcolissioninmap(456, -148, 486, -80);//1
        
        
        colact[0].x = 1;
        colact[0].y = 4;
        colact[0].z = 1;

        colact[1].x = 1;
        colact[1].y = 5;
        colact[1].z = 0;

        if (mapspawn == 0){Ppos = Vec2(-234, -130);}

    
    
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
            if (colact[i].x == 0) { Ppos.x = Pposcons.x; }
            if (colact[i].x == 1) { mapid = colact[i].y;  mapspawn = colact[i].z;}
        }
        if (xcol && ycol && pxcol && !pycol)
        {
            if (colact[i].x == 0) { Ppos.y = Pposcons.y; }
            if (colact[i].x == 1) { mapid = colact[i].y; mapspawn = colact[i].z;}
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
}
