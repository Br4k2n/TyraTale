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

        auto pathyellow = FileUtils::fromCwd("sprites/solidcol/yellow.png");
        auto pathred= FileUtils::fromCwd("sprites/solidcol/Red.png");

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

        YHbox = engine->renderer.getTextureRepository().add(pathyellow);
        RHbox = engine->renderer.getTextureRepository().add(pathred);

        UI_battleicons.size = Vec2(100, 50);
        UI_battleicons.mode = MODE_STRETCH;
        engine->audio.song.stop();
        engine->audio.song.load(Enemy.musicpath);
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_TXT2.adpcm"));
        

        GameStatecons = 1;
    }
    std::string status, Healthtext;
    status = Pname + "  LV " + std::to_string(LOVE) + "    HP   ";
    Healthtext = std::to_string(currenthp) + "/" + std::to_string(Maxhp);
    int len = status.length();
    int len2 = Healthtext.length();
    for (int i = 0; i < len; i++)
        {
            auto* e = getletter(status, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(50 + 10 * i, 375);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
        }
        for (int i = 0; i < len2; i++)
        {
            auto* e = getletter(Healthtext, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2((70 + len * 10 + 10 * i) + Maxhp, 375);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
        }
    UI_HealthBar.size = Vec2(Maxhp,18);
    UI_HealthBar.position = Vec2(50 + len * 10, 375);
    RHbox->addLink(UI_HealthBar.id);
    ren.render(UI_HealthBar);
    RHbox->removeLinkById(UI_HealthBar.id);
    UI_HealthBar.size = Vec2(currenthp,18);
    YHbox->addLink(UI_HealthBar.id);
    ren.render(UI_HealthBar);
    YHbox->removeLinkById(UI_HealthBar.id);


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
        UI_battleicons.position = Vec2(20 + 130 , 400 );
        ren.render(UI_battleicons);
        act2->removeLinkById(UI_battleicons.id);
    }
    else
    {
        act1->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 130 , 400 );
        ren.render(UI_battleicons);
        act1->removeLinkById(UI_battleicons.id);
    }

    if (option == 3){
        itens2->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 130 * 2, 400);
        ren.render(UI_battleicons);
        itens2->removeLinkById(UI_battleicons.id);
    }
    else{
        itens1->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 130 * 2, 400);
        ren.render(UI_battleicons);
        itens1->removeLinkById(UI_battleicons.id);
    }
    if (option == 4){
        mercy2->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 130 * 3, 400);
        ren.render(UI_battleicons);
        mercy2->removeLinkById(UI_battleicons.id);
    }
    else
    {
        mercy1->addLink(UI_battleicons.id);
        UI_battleicons.position = Vec2(20 + 130 * 3, 400);
        ren.render(UI_battleicons);
        mercy1->removeLinkById(UI_battleicons.id);
    }
    ren.render(UI_FaceboxSprite);
    ren.render(UI_ChatboxSprite);
    if (BattleMenuState != -1){
    if (Ppad.Cross)
    {
        engine->audio.adpcm.tryPlay(menuoptionoise);
        if (BattleMenuState == 0){
            if (option == 1)
            {
            BattleMenuState = 1;
            }
            if (option == 2)
            {
                BattleMenuState = 2;
            }
         if (option == 3)
            {
                BattleMenuState = 3;
            }
            if (option == 4)
            {
                BattleMenuState = 4;
            }
        }
    }
    if (Ppad.Square)
    {
        if (BattleMenuState == 1)
        {
            BattleMenuState = 0;
        }
        if (BattleMenuState == 2)
        {
            BattleMenuState = 0;
        }
        if (BattleMenuState == 3)
        {
            BattleMenuState = 0;
        }
        if (BattleMenuState == 4)
        {
            BattleMenuState = 0;
        }
    }
    }

    if (BattleMenuState == 0)
    {
    if (Ppad.DpadLeft){option -= 1;}
    if (Ppad.DpadRight){option += 1;}
    tipechat = 10;
    if (turns == 0){str = Enemy.encountertex;}
    else
    { 
    int random = rand() % 100;
    TYRA_ASSERT(true,random);
    if (random >= 50){str = Enemy.neutral1;}
    if (random < 50){str = Enemy.neutral2;}
    }
    drawtext();
    if (option < 1){option = 4;}
    if (option > 4){option = 1;}
    }

if (BattleMenuState != BattleMenuStatecons)
{
    blt1 = 9999;
    blt2 = 9999;
    lbp = 0;
    action = false;
    chatnumb = 0;
    BattleMenuStatecons = BattleMenuState;
}

}

}