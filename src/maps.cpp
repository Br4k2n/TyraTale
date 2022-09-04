#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::mapinit()
{
    auto PPath1 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
    auto PPath2 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
    auto PPath3 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
    auto PPath4 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
    auto PPath5 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
    if (mapid == 0)
    {
    PPath1 = FileUtils::fromCwd("sprites/maps/ruin_1a.png");
    PPath2 = FileUtils::fromCwd("sprites/maps/ruin_1b.png");
    map1.mode = SpriteMode::MODE_STRETCH;
    map1.size = Vec2(512, 512);
    map1.position = Vec2(0,0);
    map2.mode = SpriteMode::MODE_STRETCH;
    map2.size = Vec2(512, 512);
    map2.position = Vec2(1024,0);
    
    }
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