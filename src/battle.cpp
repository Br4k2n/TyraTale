#include "Undertale.hpp"
#include <cstdlib>
namespace tale
{
using namespace Tyra;

void tale::Battle()
{   
    bool battlestatechanged = false;
    const auto& Ppad = engine->pad.getClicked();
    auto& ren = engine->renderer.renderer2D;
    if (GameStatecons != 1)
    {
        battlestatechanged = true;
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
        auto green = FileUtils::fromCwd("sprites/solidcol/green.png");

        auto dmgin = FileUtils::fromCwd("sprites/battle/damageindicator.png");
        auto dmgpoin1 = FileUtils::fromCwd("sprites/battle/dmgpointer1.png");
        auto dmgpoin2 = FileUtils::fromCwd("sprites/battle/dmgpointer2.png");

        auto pathatt1 = FileUtils::fromCwd("sprites/battle/spr_strike_1.png");
        auto pathatt2 = FileUtils::fromCwd("sprites/battle/spr_strike_2.png");
        auto pathatt3 = FileUtils::fromCwd("sprites/battle/spr_strike_3.png");
        auto pathatt4 = FileUtils::fromCwd("sprites/battle/spr_strike_4.png");
        auto pathatt5 = FileUtils::fromCwd("sprites/battle/spr_strike_5.png");

        auto pathatt6 = FileUtils::fromCwd("sprites/battle/bubble_2.png");

        auto snd_attack1 = FileUtils::fromCwd("Sounds/adpcm/snd_attack1.adpcm");
        auto snd_hit = FileUtils::fromCwd("Sounds/adpcm/snd_hit.adpcm");
        auto snd_escape = FileUtils::fromCwd("Sounds/adpcm/snd_escape.adpcm");
        attacknoise = engine->audio.adpcm.load(snd_attack1);
        hitnoise = engine->audio.adpcm.load(snd_hit);
        runawaynoise = engine->audio.adpcm.load(snd_escape);
        
        attanm_sprite.size = Vec2(100,100);
        attanm_sprite.mode = MODE_STRETCH;
        attanm_sprite.position = Enemy.Epos;
        anm_attack1 = engine->renderer.getTextureRepository().add(pathatt1);
        anm_attack2 = engine->renderer.getTextureRepository().add(pathatt2);
        anm_attack3 = engine->renderer.getTextureRepository().add(pathatt3);
        anm_attack4 = engine->renderer.getTextureRepository().add(pathatt4);
        anm_attack5 = engine->renderer.getTextureRepository().add(pathatt5);
        chatbubble = engine->renderer.getTextureRepository().add(pathatt6);
        anm_attack1->addLink(attanm_sprite.id);
        chatbubble->addLink(UI_chatbubble.id);
        UI_chatbubble.mode = MODE_STRETCH;

        enm_body1 = engine->renderer.getTextureRepository().add(Enemy.textpath);
        enm_bodydmg = engine->renderer.getTextureRepository().add(Enemy.dmgtextpath);
        enm_body1->addLink(UI_FaceboxSprite.id);
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
        GHbox = engine->renderer.getTextureRepository().add(green);

        damageindicator = engine->renderer.getTextureRepository().add(dmgin);
        dmgpointer1 = engine->renderer.getTextureRepository().add(dmgpoin1);
        dmgpointer2 = engine->renderer.getTextureRepository().add(dmgpoin2);
        dmgpointer1->addLink(attpointer_sprite.id);
        attpointer_sprite.size = Vec2(103, 103);
        attpointer_sprite.mode = MODE_STRETCH;

        UI_battleicons.size = Vec2(100, 50);
        UI_battleicons.mode = MODE_STRETCH;
        engine->audio.song.stop();
        engine->audio.song.load(Enemy.musicpath);
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_TXT2.adpcm"));
        monsdiednoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_Mdeath.adpcm"));
        anm_attack1->addLink(attanm_sprite.id);
        BattleMenuState = 0;
        GameStatecons = 1;
    }
    if (showenemy)
    {
        UI_FaceboxSprite.position = Enemy.Epos;
        ren.render(UI_FaceboxSprite);
    }
    ren.render(UI_ChatboxSprite);
    

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
    


    if (BattleMenuState != -10){
    if (Ppad.Cross)
    {
        if (BattleMenuState != 11)
        {
        int ch = getavailablechanel();
        engine->audio.adpcm.setVolume(30, ch);
        engine->audio.adpcm.tryPlay(menuoptionoise, ch);
        }
        if (BattleMenuState == -1 && !battlestatechanged)
        {
            battlestatechanged = true;
            if (Enemy.hostile){BattleMenuState = -10;}
            else {BattleMenuState = 0;}
        }
        if (BattleMenuState == 4 && !battlestatechanged)
        {
            battlestatechanged = true;
            if (suboption == 1) 
            {
            SpareEnemy();
            }
            if (suboption == 2) 
            {
            BattleMenuState = 42;
            }
        }
        if (BattleMenuState == 2 && !battlestatechanged)
        {
            battlestatechanged = true;
            if (suboption == 1) 
            {
            BattleMenuState = 21;
            }
            else
            {
                str = Enemy.actaction[suboption-2];
                BattleMenuState = 29;
                tipechat = 12;
            }
        }
        if (BattleMenuState == 1 && !battlestatechanged)
        {
            battlestatechanged = true;
            if (suboption == 1) 
            {
            BattleMenuState = 11;
            }
            
        }
        if (BattleMenuState == 10)
        {
            battlestatechanged = true;
            battleexit();
        }
        
        if (BattleMenuState == 0 && !battlestatechanged){
            battlestatechanged = true;
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

    if (BattleMenuState == 10)
    {
        str = "*YOU WON!#*You earned 0 EXP and 0 gold.";
        tipechat = 10;
        drawtext();
    }
    

    if (BattleMenuState == 0)
    {
        if (option == 1)
            {
            PlayerHeart.position = Vec2(25, 410);
            ren.render(PlayerHeart);
            }
            if (option == 2)
            {
            PlayerHeart.position = Vec2(25 + 130, 410);
            ren.render(PlayerHeart);
            }
         if (option == 3)
            {
            PlayerHeart.position = Vec2(25 + 130*2, 410);
            ren.render(PlayerHeart);
            }
            if (option == 4)
            {
            PlayerHeart.position = Vec2(25 + 130*3, 410);
            ren.render(PlayerHeart);
            }

    if (Ppad.DpadLeft){option -= 1;}
    if (Ppad.DpadRight){option += 1;}
    tipechat = 10;
    if (turns == 0){str = Enemy.encountertex;}
    drawtext();
    if (option < 1){option = 4;}
    if (option > 4){option = 1;}
    }

    if (BattleMenuState == -1)
    {
        placeholderfixtape1 = false;
        tipechat = 15;
        drawtext();
        
    }

    if (BattleMenuState == 1)
    {
    std::string op1 = Enemy.name, hash = "* ";
    std::string op2 = hash + op1;
    int porcent = Enemy.currhp / 100, hdisplay = 0;
    for (int i = 0; i < 100; i++)
    {
        if (porcent * i < Enemy.currhp)
        {
            hdisplay++;
        }
        if (porcent * i > Enemy.currhp)
        {
            hdisplay--;
        }
    }
    int len1 = op2.length();
        if (option == 1)
        {
            PlayerHeart.position = Vec2(80, 280);
            ren.render(PlayerHeart);
        }
    
    UI_HealthBar.size = Vec2(100,18);
    UI_HealthBar.position = Vec2(150 + len1 * 10, 280);
    RHbox->addLink(UI_HealthBar.id);
    ren.render(UI_HealthBar);
    RHbox->removeLinkById(UI_HealthBar.id);
    UI_HealthBar.size = Vec2(hdisplay,18);
    GHbox->addLink(UI_HealthBar.id);
    ren.render(UI_HealthBar);
    GHbox->removeLinkById(UI_HealthBar.id);

    for (int i = 0; i < len1; i++)
    {
        auto* e = getletter(op2, i);
        e->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(100 + 10 * i, 280);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
    }

    }
    if (BattleMenuState == 11)
    {
        auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(UI_ChatboxSprite.id);
        remtex->removeLinkById(UI_ChatboxSprite.id);
        damageindicator->addLink(UI_ChatboxSprite.id);
        UI_ChatboxSprite.position = Vec2(40,260);
        UI_ChatboxSprite.size = Vec2(430,120);
        ren.render(UI_ChatboxSprite);
        damageindicator->removeLinkById(UI_ChatboxSprite.id);
        remtex->addLink(UI_ChatboxSprite.id);
        UI_ChatboxSprite.size = Vec2(800, 200);
        UI_ChatboxSprite.position = Vec2(30, 250);
        ren.render(attpointer_sprite);
        
        attpointer_sprite.position = Vec2(40 + attpointer * 5, 260);
        if (attpointer > 86)
        {
            BattleMenuState = -1;
            attpointer = 0;
            attacked = false;
        }
        if (!attacked && !battlestatechanged)
        {
        attpointer ++;
        if (Ppad.Cross)
        { 
            attacked = true; 
            int ch = getavailablechanel();
        engine->audio.adpcm.setVolume(60, ch);
        engine->audio.adpcm.tryPlay(attacknoise, ch);
        }
        }
        else
        {
            int porc = (atk + 20 + weap.dmg);
            if (attpointer > 75 )
            {
                dmggiven = (porc / 10) * 5;
            }
            else if (attpointer > 64 )
            {
                dmggiven = (porc / 10) * 7;
            }
            else if (attpointer > 53 )
            {
                dmggiven = (porc / 10) * 8;
            }
            else if (attpointer > 43 )
            {
                dmggiven = (porc / 10) * 9;
            }
            else if (attpointer == 43 )
            {
                dmggiven = porc;
            }
            else if (attpointer < 10 )
            {
                dmggiven = (porc / 10) * 5;
            }
            else if (attpointer < 21 )
            {
                dmggiven = (porc / 10) * 7;
            }
            else if (attpointer < 32 )
            {
                dmggiven = (porc / 10) * 8;
            }
            else if (attpointer < 43 )
            {
                dmggiven = (porc / 10) * 9;
            }

            if (attanm1 == 0)
            {
                auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(attpointer_sprite.id);
                textremove->removeLinkById(attpointer_sprite.id);
                dmgpointer2->addLink(attpointer_sprite.id);
            }
            if (attanm1 == 10)
            {
                auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(attpointer_sprite.id);
                textremove->removeLinkById(attpointer_sprite.id);
                dmgpointer1->addLink(attpointer_sprite.id);
            }
            attanm1 ++;
            if (attanm1 > 20){attanm1 = 0;}

            if (attanm2 == 0)
            {
                attanm_sprite.position.y = Enemy.Epos.y - 40;
                auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(attanm_sprite.id);
                remtex->removeLinkById(attanm_sprite.id);
                anm_attack1->addLink(attanm_sprite.id);
            }
            if (attanm2 == 10)
            {
                attanm_sprite.position.y = Enemy.Epos.y - 25;
                auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(attanm_sprite.id);
                remtex->removeLinkById(attanm_sprite.id);
                anm_attack2->addLink(attanm_sprite.id);
            }
            if (attanm2 == 20)
            {
                attanm_sprite.position.y = Enemy.Epos.y;
                auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(attanm_sprite.id);
                remtex->removeLinkById(attanm_sprite.id);
                anm_attack3->addLink(attanm_sprite.id);
            }
            if (attanm2 == 30)
            {
                attanm_sprite.position.y = Enemy.Epos.y + 25;
                auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(attanm_sprite.id);
                remtex->removeLinkById(attanm_sprite.id);
                anm_attack4->addLink(attanm_sprite.id);
            }
            if (attanm2 == 40)
            {
                attanm_sprite.position.y = Enemy.Epos.y + 40;
                auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(attanm_sprite.id);
                remtex->removeLinkById(attanm_sprite.id);
                anm_attack5->addLink(attanm_sprite.id);
            }
            
            
            if (attanm2 < 50){ren.render(attanm_sprite);}
            
            if (attanm2 > 55)
            { 
            int porcent = Enemy.maxhp / 100, hdisplay = 0;
            for (int i = 0; i < 100; i++)
            {
                if (porcent * i < Enemy.currhp)
                {
                    hdisplay++;
                }
                if (porcent * i > Enemy.currhp)
                {
                    hdisplay--;
                }
                TYRA_LOG(hdisplay);
            }
            UI_HealthBar.size = Vec2(100,18);
            UI_HealthBar.position = Vec2(Enemy.Epos.x, Enemy.Epos.y - 50);
            RHbox->addLink(UI_HealthBar.id);
            ren.render(UI_HealthBar);
            RHbox->removeLinkById(UI_HealthBar.id);
            UI_HealthBar.size = Vec2(hdisplay,18);
            GHbox->addLink(UI_HealthBar.id);
            ren.render(UI_HealthBar);
            GHbox->removeLinkById(UI_HealthBar.id);

            std::string strnum = "1234567890";
            std::string strdmg = std::to_string(dmggiven);
            int dmglen = strdmg.length();
            for (int i = 0; i < 10; i++)
            {
            for (int e = 0; e < dmglen; e++)
            if (strnum.at(i) == strdmg.at(e)) 
            {
            letters[i + 73]->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(Enemy.Epos.x + 20 * e, 50);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            
            }           

            }

            if (attanm2 == 60)
            {
                int ch = getavailablechanel();
                engine->audio.adpcm.setVolume(60, ch);
                engine->audio.adpcm.tryPlay(hitnoise, ch);
                enm_body1->removeLinkById(UI_FaceboxSprite.id);
                enm_bodydmg->addLink(UI_FaceboxSprite.id);
                if (Enemy.currhp <= dmggiven){Enemy.currhp = 0;}
                if (Enemy.currhp > dmggiven){Enemy.currhp -= dmggiven;}
                UI_FaceboxSprite.position.x -= 10;
            }
            if (attanm2 == 65)
            {
                UI_FaceboxSprite.position.x += 20;
            }
            if (attanm2 == 70)
            {
                UI_FaceboxSprite.position.x -= 20;
            }
            if (attanm2 == 75)
            {
                UI_FaceboxSprite.position.x += 20;
            }
            if (attanm2 == 80)
            {
                UI_FaceboxSprite.position.x -= 20;
            }
            if (attanm2 == 85)
            {
                UI_FaceboxSprite.position.x += 20;
            }
            if (attanm2 == 95)
            {
                UI_FaceboxSprite.position.x -= 10;
                if (Enemy.currhp == 0)
                {
                    BattleMenuState = 10; 
                    int ch = getavailablechanel();
                    engine->audio.adpcm.setVolume(60, ch);
                    engine->audio.adpcm.tryPlay(monsdiednoise, ch);
                    showenemy = false;
                    engine->audio.song.stop();
                    attanm1 = 0;
                    attanm2 = 0;
                    if (Enemy.specialcontition == 0) TL_Dummy = 1;
                }
                else {skipturn();
                enm_bodydmg->removeLinkById(UI_FaceboxSprite.id);
                enm_body1->addLink(UI_FaceboxSprite.id);
                }
                attpointer = 0;
            }
            attanm2 ++;
            
        }

    }

    if (BattleMenuState == 4)
    {
    std::string op1, op2;
    op1 = "* Spare";
    op2 = "* Flee";
    int len1 = op1.length();
    int len2 = op2.length();
    if (Ppad.DpadUp){suboption -= 1;}
    if (Ppad.DpadDown){suboption += 1;}
    if (suboption < 1){ suboption = 2; }
    if (suboption > 2){ suboption = 1; }

    for (int i = 0; i < len1; i++)
    {
        auto* e = getletter(op1, i);
        e->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(100 + 10 * i, 280);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
    }
    for (int i = 0; i < len2; i++)
    {
        auto* e = getletter(op2, i);
        e->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(100 + 10 * i, 310);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
    }

    if (suboption == 1) 
            {
            PlayerHeart.position = Vec2(70, 280);
            ren.render(PlayerHeart);
            }
            if (suboption == 2) 
            {
            PlayerHeart.position = Vec2(70, 310);
            ren.render(PlayerHeart);
            }
    
    }

    if (BattleMenuState == 42)
    {
    std::string op1;
    op1 = "* Escaped...";
    TL_Dummy = 3;
    int len1 = op1.length();

    for (int i = 0; i < len1; i++)
    {
        auto* e = getletter(op1, i);
        e->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(100 + 10 * i, 280);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
    }
    if (PlayerHeart.position.x == 70)
    {
        int ch = getavailablechanel();
        engine->audio.adpcm.setVolume(60, ch);
        engine->audio.adpcm.tryPlay(runawaynoise, ch);
    }
    ren.render(PlayerHeart);
    PlayerHeart.position.x--;
    if (PlayerHeart.position.x < -50)
    {
    battleexit();
    }

    }


    if (BattleMenuState == 2)
    {
    std::string op1;
    op1 = "* Check";
    int len1 = op1.length();
    int alen1 = Enemy.actoption[0].length();
    int alen2 = Enemy.actoption[1].length();
    int alen3 = Enemy.actoption[2].length();
    int alen4 = Enemy.actoption[3].length();
    int alen5 = Enemy.actoption[4].length();
    if (Ppad.DpadUp){suboption -= 2;}
    if (Ppad.DpadDown){suboption += 2;}
    if (Ppad.DpadLeft){suboption -= 1;}
    if (Ppad.DpadRight){suboption += 1;}
    if (suboption < 1){ suboption = Enemy.numactoptions + 1; }
    if (suboption > Enemy.numactoptions + 1){ suboption = 1; }

    for (int i = 0; i < len1; i++)
    {
        auto* e = getletter(op1, i);
        e->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(100 + 10 * i, 280);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
    }
    if (Enemy.numactoptions >= 1)
    {
        for (int i = 0; i < alen1; i++){
        auto* z = getletter(Enemy.actoption[0], i);
        z->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(300 + 10 * i, 280);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
        }
    }
    if (Enemy.numactoptions >= 2)
    {
        for (int i = 0; i < alen2; i++){
        auto* z = getletter(Enemy.actoption[1], i);
        z->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(100 + 10 * i, 300);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
        }
    }
    if (Enemy.numactoptions >= 3)
    {
        for (int i = 0; i < alen3; i++){
        auto* z = getletter(Enemy.actoption[2], i);
        z->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(300 + 10 * i, 300);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
        }
    }
    if (Enemy.numactoptions >= 4)
    {
        for (int i = 0; i < alen4; i++){
        auto* z = getletter(Enemy.actoption[3], i);
        z->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(100 + 10 * i, 320);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
        }
    }
    if (Enemy.numactoptions >= 5)
    {
        for (int i = 0; i < alen5; i++){
        auto* z = getletter(Enemy.actoption[4], i);
        z->addLink(UI_LetterSprite.id);
        UI_LetterSprite.position = Vec2(300 + 10 * i, 320);
        ren.render(UI_LetterSprite);
        auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
        textremove->removeLinkById(UI_LetterSprite.id);
        }
    }

    if (suboption == 1) 
    {
    PlayerHeart.position = Vec2(70, 280);
    ren.render(PlayerHeart);
    }
    if (suboption == 2) 
    {
    PlayerHeart.position = Vec2(270, 280);
    ren.render(PlayerHeart);
    }
    if (suboption == 3) 
    {
    PlayerHeart.position = Vec2(70, 300);
    ren.render(PlayerHeart);
    }
    if (suboption == 4) 
    {
    PlayerHeart.position = Vec2(270, 300);
    ren.render(PlayerHeart);
    }
    if (suboption == 5) 
    {
    PlayerHeart.position = Vec2(70, 320);
    ren.render(PlayerHeart);
    }
    if (suboption == 6) 
    {
    PlayerHeart.position = Vec2(270, 320);
    ren.render(PlayerHeart);
    }
    
    }

    if (BattleMenuState == 29)
    {
        drawtext();
        if (Enemy.specialcontition == 0) 
        {
            if (turns >= 8)
            {
                Enemy.Epos.y -= 2;
                if (Enemy.Epos.y < -150)
                {
                    BattleMenuState = 10;
                    TL_Dummy = 2;
                }
            }
        }
    }

    if (BattleMenuState == 21) 
    {
    tipechat = 11;
    str = Enemy.check;
    drawtext();
    }

if (BattleMenuState != BattleMenuStatecons)
{
    if (BattleMenuState == 0 && (BattleMenuStatecons == -10 || BattleMenuStatecons == -1) )
    {
    int random = rand() % 100;
    if (random >= 50){str = Enemy.neutral1;}
    if (random < 50){str = Enemy.neutral2;}
    texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_TXT2.adpcm"));
    }
    blt1 = 9999;
    blt2 = 9999;
    lbp = 0;
    bdp = 0;
    action = false;
    chatnumb = 0;
    suboption = 1;
    BattleMenuStatecons = BattleMenuState;
    if (BattleMenuState == -1 || BattleMenuState == -10)
    {
    texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_TXT1.adpcm"));
    int random = rand() % 100;
    if (random >= 50){str = Enemy.spech1;}
    if (random < 50){str = Enemy.spech2;}
    }
}

}


void tale::SpareEnemy()
{
    if (!Enemy.mercy) 
    {
        skipturn();
    }
}

void tale::skipturn()
{
    turns++; 
    attanm1 = 0;
    attanm2 = 0;
    attacked = false;
    if (Enemy.specialcontition == 0 && turns >= 8){BattleMenuState = 29; str = Enemy.adcdiag; tipechat = 10;}
    else {BattleMenuState = -1;}
}

void tale::battleexit()
{
    blt1 = 9999;
    blt2 = 9999;
    lbp = 0;
    bdp = 0;
    action = false;
    chatnumb = 0;
    suboption = 1;
    BattleMenuState = 0;
    GameState = 0;

    engine->renderer.getTextureRepository().free(fight1);
    engine->renderer.getTextureRepository().free(fight2);
    engine->renderer.getTextureRepository().free(act1);
    engine->renderer.getTextureRepository().free(act2);
    engine->renderer.getTextureRepository().free(itens1);
    engine->renderer.getTextureRepository().free(itens2);
    engine->renderer.getTextureRepository().free(mercy1);
    engine->renderer.getTextureRepository().free(mercy2);
    engine->renderer.getTextureRepository().free(dmgpointer1);
    engine->renderer.getTextureRepository().free(dmgpointer2);
    engine->renderer.getTextureRepository().free(damageindicator);

    engine->renderer.getTextureRepository().free(anm_attack1);
    engine->renderer.getTextureRepository().free(anm_attack2);
    engine->renderer.getTextureRepository().free(anm_attack3);
    engine->renderer.getTextureRepository().free(anm_attack4);
    engine->renderer.getTextureRepository().free(anm_attack5);

    engine->renderer.getTextureRepository().free(YHbox);
    engine->renderer.getTextureRepository().free(RHbox);
    engine->renderer.getTextureRepository().free(GHbox);

    auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(UI_FaceboxSprite.id);
    remtex->removeLinkById(UI_FaceboxSprite.id);
    engine->renderer.getTextureRepository().free(enm_body1);
    engine->renderer.getTextureRepository().free(enm_bodydmg);
    
    
    tipechat = 0;
    attanm1 = 0;
    attanm2 = 0;
    attacked = false;
    showenemy = true;
    turns = 0;
    maptheme();
    event(13);
    engine->audio.adpcm.reset();
}
}