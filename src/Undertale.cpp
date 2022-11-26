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
    if (engine->pad.getClicked().R1){mapid++;}
    if (engine->pad.getClicked().L1){mapid--;}
    if (GameState == 0)
    {
    GameStatecons = 0;
    transition();
    reloadplayer();
    colcheck();
    mapchange();
    inst_conditionmove();

    ren.beginFrame();
    camupdate();
    drawinstances();
    ren.renderer2D.render(trans);
    if(action){drawtext();}
    ren.endFrame();
    
    }

    if (GameState == 1)
    {
        ren.beginFrame();
        Battle();
        ren.endFrame();
    }
}

}  // namespace Racer
