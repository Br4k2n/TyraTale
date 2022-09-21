#include "Undertale.hpp"
#include <cstdlib>
namespace tale
{
using namespace Tyra;

void tale::Battle(Enemyinfo Enemy)
{   
    const auto& Ppad = engine->pad.getClicked();
    auto& ren = engine->renderer.renderer2D;
    if (GameStatecons != 1)
    {
        auto Path1 = FileUtils::fromCwd("sprites/fight1.png");
        auto Path2 = FileUtils::fromCwd("sprites/fight2.png");

        auto Path3 = FileUtils::fromCwd("sprites/act1.png");
        auto Path4 = FileUtils::fromCwd("sprites/act2.png");

        auto Path5 = FileUtils::fromCwd("sprites/item1.png");
        auto Path6 = FileUtils::fromCwd("sprites/item2.png");

        auto Path7 = FileUtils::fromCwd("sprites/mercy1.png");
        auto Path8 = FileUtils::fromCwd("sprites/mercy2.png");

        auto* text = engine->renderer.getTextureRepository().add(Enemy.textpath);
        text->addLink(UI_FaceboxSprite.id);
        UI_FaceboxSprite.position = Vec2(200 ,224 - 128);
        UI_FaceboxSprite.size = Vec2(128, 128);

        fight1 = engine->renderer.getTextureRepository().add(Path1);
        fight2 = engine->renderer.getTextureRepository().add(Path2);

        act1 = engine->renderer.getTextureRepository().add(Path3);
        act2 = engine->renderer.getTextureRepository().add(Path4);

        itens1 = engine->renderer.getTextureRepository().add(Path5);
        itens2 = engine->renderer.getTextureRepository().add(Path6);

        mercy1 = engine->renderer.getTextureRepository().add(Path7);
        mercy2 = engine->renderer.getTextureRepository().add(Path8);

        UI_battleicons.size = Vec2(128, 64);
        engine->audio.song.stop();
        engine->audio.song.load(Enemy.musicpath);
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();

        GameStatecons = 1;
    }

    ren.render(UI_FaceboxSprite);

    if (BattleMenuState == 0)
    {
    tipechat = 10;
    if (turns == 0){str = Enemy.encountertex;}
    else
    { 
    int random = rand() % 100;
    if (random >= 50){str = Enemy.neutral1;}
    if (random < 50){str = Enemy.neutral2;}
    }
    drawtext();
    if (Ppad.DpadLeft){option -= 1;}
    if (Ppad.DpadRight){option += 1;}
    if (option < 1){option = 4;}
    if (option > 4){option = 1;}
    if (option == 1)
    {
        fight2->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 , 400);
        ren.render(UI_battleicons);
        fight2->removeLinkById(UI_battleicons.id);
    }
    else
    {
        fight1->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 , 400);
        ren.render(UI_battleicons);
        fight1->removeLinkById(UI_battleicons.id);
    }

    if (option == 2){
        act2->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 120 , 400 );
        ren.render(UI_battleicons);
        act2->removeLinkById(UI_battleicons.id);
    }
    else
    {
        act1->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 120 , 400 );
        ren.render(UI_battleicons);
        act1->removeLinkById(UI_battleicons.id);
    }

    if (option == 3){
        itens2->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 120 * 2, 400);
        ren.render(UI_battleicons);
        itens2->removeLinkById(UI_battleicons.id);
    }
    else{
        itens1->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 120 * 2, 400);
        ren.render(UI_battleicons);
        itens1->removeLinkById(UI_battleicons.id);
    }
    if (option == 4){
        mercy2->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 120 * 3, 400);
        ren.render(UI_battleicons);
        mercy2->removeLinkById(UI_battleicons.id);
    }
    else
    {
        mercy1->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 120 * 3, 400);
        ren.render(UI_battleicons);
        mercy1->removeLinkById(UI_battleicons.id);
    }
    }

}

}