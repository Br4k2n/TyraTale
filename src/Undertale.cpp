#include "Undertale.hpp"

namespace tale {

using namespace Tyra;

tale::tale(Engine* t_engine) { engine = t_engine; }
tale::~tale(){}
void tale::init() 
{ 
    engine->renderer.setClearScreenColor(Color(0.32F,0.32F,0.32F));
    startplayer();
    resetcolissioninmap();
    mapinit();
    
}

void tale::loop() 
{ 
    auto& ren = engine->renderer;
    Enemyinfo enf;
    enf.encountertex = "You encountered the Dummy.";
    enf.neutral1 = "Dummy stands around absentmindedly.";
    enf.neutral2 = "Dummy looks like it's about to fall over.";
    enf.textpath = FileUtils::fromCwd("sprites/Characters/dummy/Dummy.png");
    enf.musicpath = FileUtils::fromCwd("Sounds/Anticipation.wav");
    if (GameState == 0)
    {
    transition();
    reloadplayer();
    colcheck();
    mapchange();
    ren.beginFrame();
    camupdate();
    ren.renderer2D.render(player);
    ren.renderer2D.render(trans);
    if(action){drawtext();}
    ren.endFrame();
    }

    if (GameState == 1)
    {
        ren.beginFrame();
        Battle(enf);
        ren.endFrame();
    }
}

}  // namespace Racer
