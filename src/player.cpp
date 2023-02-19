#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;


void tale::reloadplayer()
{
    if (!Tbool && !mapdone && !action && !Pstop){
    const auto pad = engine->pad.getPressed();
    const auto ppad = engine->pad.getClicked();


    #if debugmode
    if (ppad.Cross) {TYRA_LOG(Ppos.x); TYRA_LOG(Ppos.y); TYRA_LOG(TL_Dummy); TYRA_LOG(TEvent); TYRA_LOG("-------------------------");}
    if (ppad.R1) { mapid++; }
    if (ppad.L1) { mapid--; }
    if (ppad.Triangle) { TEvent++;TYRA_LOG(TEvent); }
    if (ppad.Circle) { TEvent--;TYRA_LOG(TEvent); }
    #endif

    if (pad.DpadRight)
    {
         
        Ppos.x += vel;
        direction = 4;

    }else if (pad.DpadLeft)
    {
        Ppos.x -= vel;
        direction = 2;
    }
    if (pad.DpadUp)
    {
        Ppos.y -= vel;
        direction = 3;

    }else if (pad.DpadDown)
    {
        Ppos.y += vel;
        direction = 1;

    }

    if (pad.DpadUp || pad.DpadDown || pad.DpadLeft || pad.DpadRight)
    {
        moving = true;
        standing = false;
    } else 
    {
        moving = false;
        anm = 0;
    }

    if (moving == false && standing == false)
    {
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
        textremove->removeLinkById(player.id);
        if (direction == 1){ptex1->addLink(player.id);}
        else if (direction == 2){ptex2->addLink(player.id);}
        else if(direction == 3){ptex3->addLink(player.id);}
        else if(direction == 4){ptex4->addLink(player.id);}
        standing = true;
    }
    
    if (moving)
    {
        anm += 4;
        if (anm > 100) {anm = 0;}
        
        if (direction == 1)
        {
            if (dircons != 1 && anm < 50) {anmt=false;}
            if (dircons != 1 && anm > 50) {anmt=true;}
        if (anm < 50 && !anmt) 
        {
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
            textremove->removeLinkById(player.id);
            pmtex1->addLink(player.id);
            anmt = true;
        }
        if (anm > 50 && anmt) 
        {
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
            textremove->removeLinkById(player.id);
            pmtex2->addLink(player.id);
            anmt = false;
        }
        }
        if (direction == 2)
        {
            if (dircons != 2 && anm < 50) {anmt=false;}
            if (dircons != 2 && anm > 50) {anmt=true;}
        if (anm < 50 && !anmt) 
        {
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
            textremove->removeLinkById(player.id);
            pmtex3->addLink(player.id);
            anmt = true;
        }
        if (anm > 50 && anmt) 
        {
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
            textremove->removeLinkById(player.id);
            pmtex4->addLink(player.id);
            anmt = false;
        }
        }
        if (direction == 3)
        {
            if (dircons != 3 && anm < 50) {anmt=false;}
            if (dircons != 3 && anm > 50) {anmt=true;}
        if (anm < 50 && !anmt) 
        {
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
            textremove->removeLinkById(player.id);
            pmtex5->addLink(player.id);
            anmt = true;
        }
        if (anm > 50 && anmt) 
        {
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
            textremove->removeLinkById(player.id);
            pmtex6->addLink(player.id);
            anmt = false;
        }
        }
        if (direction == 4)
        {
            if (dircons != 4 && anm < 50) {anmt=false;}
            if (dircons != 4 && anm > 50) {anmt=true;}
        if (anm < 50 && !anmt) 
        {
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
            textremove->removeLinkById(player.id);
            pmtex7->addLink(player.id);
            anmt = true;
        }
        if (anm > 50 && anmt) 
        {
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
            textremove->removeLinkById(player.id);
            pmtex8->addLink(player.id);
            anmt = false;
        }
        }
        

    }else{

    if (direction != dircons){
    auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
    textremove->removeLinkById(player.id);
    if (direction == 1){ptex1->addLink(player.id);}
    else if (direction == 2){ptex2->addLink(player.id);}
    else if(direction == 3){ptex3->addLink(player.id);}
    else if(direction == 4){ptex4->addLink(player.id);}
    }
    }
    dircons = direction;
    
    }
    
}
    
void tale::startplayer()
{
    auto PPath1 = FileUtils::fromCwd("sprites/transition.png");
    TYRA_LOG("started");
    auto* transtexture = engine->renderer.getTextureRepository().add(PPath1);
    transtexture->addLink(trans.id);
    

    trans.position = Vec2(0, 0);
    trans.size = Vec2(512,512);
    trans.color.a = 0;

    auto Pathp3 = FileUtils::fromCwd("sprites/spr_maincharau_2.png");
    auto Pathp2 = FileUtils::fromCwd("sprites/spr_maincharal_0.png");
    auto Pathp1 = FileUtils::fromCwd("sprites/spr_maincharad_2.png");
    auto Pathp4 = FileUtils::fromCwd("sprites/spr_maincharar_0.png");

    Tyra::Texture* Ptex[4] = {
        engine->renderer.getTextureRepository().add(Pathp1),
        engine->renderer.getTextureRepository().add(Pathp2),
        engine->renderer.getTextureRepository().add(Pathp3),
        engine->renderer.getTextureRepository().add(Pathp4)
    };

    auto Pathm1 = FileUtils::fromCwd("sprites/spr_maincharad_1.png");
    auto Pathm2 = FileUtils::fromCwd("sprites/spr_maincharad_3.png");

    auto Pathm3 = FileUtils::fromCwd("sprites/spr_maincharal_1.png");
    auto Pathm4 = FileUtils::fromCwd("sprites/spr_maincharal_0.png");

    auto Pathm5 = FileUtils::fromCwd("sprites/spr_maincharau_1.png");
    auto Pathm6 = FileUtils::fromCwd("sprites/spr_maincharau_3.png");

    auto Pathm7 = FileUtils::fromCwd("sprites/spr_maincharar_1.png");
    auto Pathm8 = FileUtils::fromCwd("sprites/spr_maincharar_0.png");

    Tyra::Texture* PtexM[8] = {
        engine->renderer.getTextureRepository().add(Pathm1),
        engine->renderer.getTextureRepository().add(Pathm2),
        engine->renderer.getTextureRepository().add(Pathm3),
        engine->renderer.getTextureRepository().add(Pathm4),
        engine->renderer.getTextureRepository().add(Pathm5),
        engine->renderer.getTextureRepository().add(Pathm6),
        engine->renderer.getTextureRepository().add(Pathm7),
        engine->renderer.getTextureRepository().add(Pathm8)
    };
    
    
    ptex1 = Ptex[0];
    ptex2 = Ptex[1];
    ptex3 = Ptex[2];
    ptex4 = Ptex[3];

    pmtex1 = PtexM[0];
    pmtex2 = PtexM[1];
    pmtex3 = PtexM[2];
    pmtex4 = PtexM[3];
    pmtex5 = PtexM[4];
    pmtex6 = PtexM[5];
    pmtex7 = PtexM[6];
    pmtex8 = PtexM[7];
    

    player.mode = SpriteMode::MODE_STRETCH;
    player.size = Vec2(24, 32);
    player.position = Vec2(256, 256);
    Ptex[0]->addLink(player.id);

    menuoptionoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_select.adpcm"));
    texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_TXT1.adpcm"));
    
    
   for (int i = 0; i < 100; i++)
    {
        instances[i].ins_sprite.mode = MODE_STRETCH;
        instances[i].direnable = false;
        instances[i].walkanm = false;
        instances[i].id = -1;
        instances[i].ins_sprite.size = Vec2(32 * 2,32 * 2);
    } 

    fontload(0);
}
}