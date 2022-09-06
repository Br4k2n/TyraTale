#include "Undertale.hpp"

namespace tale {

using namespace Tyra;

tale::tale(Engine* t_engine) { engine = t_engine; }
tale::~tale()
{
    engine->renderer.getTextureRepository().free(ptex1);
    engine->renderer.getTextureRepository().free(ptex2);
    engine->renderer.getTextureRepository().free(ptex3);
    engine->renderer.getTextureRepository().free(ptex4);
    engine->renderer.getTextureRepository().free(pmtex1);
    engine->renderer.getTextureRepository().free(pmtex2);
    engine->renderer.getTextureRepository().free(pmtex3);
    engine->renderer.getTextureRepository().free(pmtex4);
    engine->renderer.getTextureRepository().free(pmtex5);
    engine->renderer.getTextureRepository().free(pmtex6);
    engine->renderer.getTextureRepository().free(pmtex7);
    engine->renderer.getTextureRepository().free(pmtex8);

}

void tale::init() 
{ 
    engine->renderer.setClearScreenColor(Color(0.32F,0.32F,0.32F));
    startplayer();
    mapinit();
    
}

void tale::loop() 
{ 
    if (GameState == 0)
    {
    auto& ren = engine->renderer;
    reloadplayer();
    camupdate();
    TYRA_LOG("X: " ,Ppos.x, "     Y: ", Ppos.y);
    ren.beginFrame();
    ren.renderer2D.render(map1);
    ren.renderer2D.render(map2);
    ren.renderer2D.render(map3);
    ren.renderer2D.render(map4);
    ren.renderer2D.render(map5);
    ren.renderer2D.render(player);
    ren.endFrame();
    }
}

}  // namespace Racer
