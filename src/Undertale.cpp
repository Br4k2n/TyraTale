#include "Undertale.hpp"

namespace tale {

using namespace Tyra;

tale::tale(Engine* t_engine) { engine = t_engine; }
tale::~tale()
{
    engine->renderer.getTextureRepository().freeBySprite(player);
    engine->renderer.getTextureRepository().freeBySprite(map1);
    engine->renderer.getTextureRepository().freeBySprite(map2);
    engine->renderer.getTextureRepository().freeBySprite(map3);
    engine->renderer.getTextureRepository().freeBySprite(map4);
    engine->renderer.getTextureRepository().freeBySprite(map5);
}

void tale::init() 
{ 
    engine->renderer.setClearScreenColor(Color(0.32F,0.32F,0.32F));
    startplayer();
    mapinit();
    
}

void tale::loop() 
{ 
    auto& ren = engine->renderer;
    reloadplayer();
    camupdate();
    ren.beginFrame();
    ren.renderer2D.render(map1);
    ren.renderer2D.render(map2);
    ren.renderer2D.render(map3);
    ren.renderer2D.render(map4);
    ren.renderer2D.render(map5);
    ren.renderer2D.render(player);
    ren.endFrame();

}

}  // namespace Racer
