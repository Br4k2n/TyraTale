#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;


void tale::reloadplayer()
{

    const auto pad = engine->pad.getPressed();
    const auto Presspad = engine->pad.getClicked();

    if (Presspad.Cross) {TYRA_LOG("apertado");}

    if (pad.DpadLeft)
    {
         
        Xpos += vel;
        direction = 4;

    }else if (pad.DpadRight)
    {
        Xpos -= vel;
        direction = 2;
    }
    if (pad.DpadDown)
    {
        Ypos -= vel;
        direction = 1;

    }else if (pad.DpadUp)
    {
        Ypos += vel;
        direction = 3;

    }
    if (direction != dircons){
    auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(player.id);
    textremove->removeLinkById(player.id);
    if (direction == 1){ptex1->addLink(player.id);}
    else if (direction == 2){ptex2->addLink(player.id);}
    else if(direction == 3){ptex3->addLink(player.id);}
    else if(direction == 4){ptex4->addLink(player.id);}
    }
    player.position = Vec2(256,256);
    dircons = direction;
    
    
    
}
    
void tale::startplayer()
{
    auto Pathp1 = FileUtils::fromCwd("sprites/spr_maincharau_2.png");
    auto Pathp2 = FileUtils::fromCwd("sprites/spr_maincharal_0.png");
    auto Pathp3 = FileUtils::fromCwd("sprites/spr_maincharad_2.png");
    auto Pathp4 = FileUtils::fromCwd("sprites/spr_maincharar_0.png");

    Tyra::Texture* Ptex[4] = {
        engine->renderer.getTextureRepository().add(Pathp1),
        engine->renderer.getTextureRepository().add(Pathp2),
        engine->renderer.getTextureRepository().add(Pathp3),
        engine->renderer.getTextureRepository().add(Pathp4)
    };
    
    
    ptex1 = Ptex[0];
    ptex2 = Ptex[1];
    ptex3 = Ptex[2];
    ptex4 = Ptex[3];
    

    player.mode = SpriteMode::MODE_STRETCH;
    player.size = Vec2(32, 32);
    player.position = Vec2(Xpos,Ypos);
    Ptex[0]->addLink(player.id);
}


}