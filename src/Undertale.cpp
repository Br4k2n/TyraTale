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
    camupdate();
    colcheck();
    mapchange();
    ren.beginFrame();
    ren.renderer2D.render(map1);
    ren.renderer2D.render(map2);
    ren.renderer2D.render(map3);
    ren.renderer2D.render(map4);
    ren.renderer2D.render(map5);
    ren.renderer2D.render(player);
    ren.renderer2D.render(trans);
    ren.endFrame();
    }
}

}  // namespace Racer
