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
    if (GameState == 0)
    {
    transition();
    auto& ren = engine->renderer;
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
}

}  // namespace Racer
