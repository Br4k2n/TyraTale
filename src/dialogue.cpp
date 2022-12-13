#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;
using namespace std;

void tale::drawtext()
{
    string str2 = "#$*";
    auto& ren = engine->renderer.renderer2D;
    float border;
    int len = str.length();
    const auto& padpress = engine->pad.getClicked();
    string curhom = hom;
    int letterspace = 0;
    bool skiped = false;

    if (padpress.Square)
    {
    for (int i = lbp; i < len && !skiped; i++)
        {
            if (str.at(i) == str2.at(1))
            {
                chatnumb = i + 1;
                skiped = true;
            }
        };
        if (!skiped)
        chatnumb = len;
    }

    if (tipechat == 0)
    {
        
        UI_ChatboxSprite.size = Vec2(800, 200);
        UI_ChatboxSprite.position = Vec2(30, 10);
        UI_FaceboxSprite.size = Vec2(100, 100);
        UI_FaceboxSprite.position = Vec2(50, 30);
        UI_LetterSprite.size = Vec2(24,24);
        letterspace = 10;
        if (hom == "") { border = 80; } 
        else{border = 160;}
        
        ren.render(UI_ChatboxSprite);
        
        if (curtalk){
        curtalk = false;
        
        //FLOWEY

        if (hom == "flowey_neutral")
        {
        auto patha = FileUtils::fromCwd("sprites/Characters/Flowey/neutral1.png");
        auto pathb = FileUtils::fromCwd("sprites/Characters/Flowey/neutral2.png");
        facetexture1 = engine->renderer.getTextureRepository().add(patha);
        facetexture2 = engine->renderer.getTextureRepository().add(pathb);
        facetexture1->addLink(UI_FaceboxSprite.id);
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_flowey1.adpcm"));
        }
        if (hom == "flowey_disapoint")
        {
        auto patha = FileUtils::fromCwd("sprites/Characters/Flowey/disapointed1.png");
        auto pathb = FileUtils::fromCwd("sprites/Characters/Flowey/disapointed2.png");
        facetexture1 = engine->renderer.getTextureRepository().add(patha);
        facetexture2 = engine->renderer.getTextureRepository().add(pathb);
        facetexture1->addLink(UI_FaceboxSprite.id);
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_flowey1.adpcm"));
        }
        if (hom == "flowey_side1")
        {
        auto patha = FileUtils::fromCwd("sprites/Characters/Flowey/side1.png");
        auto pathb = FileUtils::fromCwd("sprites/Characters/Flowey/side2.png");
        facetexture1 = engine->renderer.getTextureRepository().add(patha);
        facetexture2 = engine->renderer.getTextureRepository().add(pathb);
        facetexture1->addLink(UI_FaceboxSprite.id);
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_flowey1.adpcm"));
        }
        if (hom == "flowey_side2")
        {
        auto patha = FileUtils::fromCwd("sprites/Characters/Flowey/side3.png");
        auto pathb = FileUtils::fromCwd("sprites/Characters/Flowey/side4.png");
        facetexture1 = engine->renderer.getTextureRepository().add(patha);
        facetexture2 = engine->renderer.getTextureRepository().add(pathb);
        facetexture1->addLink(UI_FaceboxSprite.id);
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_flowey1.adpcm"));
        }

        //TORIEL

        if (hom == "toriel_neutral")
        {
        auto patha = FileUtils::fromCwd("sprites/Characters/Toriel/spr_face_torieltalk_0.png");
        auto pathb = FileUtils::fromCwd("sprites/Characters/Toriel/spr_face_torieltalk_1.png");
        UI_FaceboxSprite.position = Vec2(20, 20);
        UI_LetterSprite.size = Vec2(18 * 1.5f,24 * 1.5f);
        facetexture1 = engine->renderer.getTextureRepository().add(patha);
        facetexture2 = engine->renderer.getTextureRepository().add(pathb);
        facetexture1->addLink(UI_FaceboxSprite.id);
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_torieltalk.adpcm"));
        }
        if (hom == "toriel_happy")
        {
        auto patha = FileUtils::fromCwd("sprites/Characters/Toriel/spr_face_torielhappytalk_0.png");
        auto pathb = FileUtils::fromCwd("sprites/Characters/Toriel/spr_face_torielhappytalk_1.png");
        UI_FaceboxSprite.position = Vec2(20, 20);
        UI_LetterSprite.size = Vec2(18 * 1.5f,24 * 1.5f);
        facetexture1 = engine->renderer.getTextureRepository().add(patha);
        facetexture2 = engine->renderer.getTextureRepository().add(pathb);
        facetexture1->addLink(UI_FaceboxSprite.id);
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_torieltalk.adpcm"));
        }
        if (hom == "toriel_side")
        {
        auto patha = FileUtils::fromCwd("sprites/Characters/Toriel/spr_face_torieltalkside_0.png");
        auto pathb = FileUtils::fromCwd("sprites/Characters/Toriel/spr_face_torieltalkside_1.png");
        UI_FaceboxSprite.position = Vec2(20, 20);
        UI_LetterSprite.size = Vec2(18 * 1.5f,24 * 1.5f);
        facetexture1 = engine->renderer.getTextureRepository().add(patha);
        facetexture2 = engine->renderer.getTextureRepository().add(pathb);
        facetexture1->addLink(UI_FaceboxSprite.id);
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_torieltalk.adpcm"));
        }


        if (hom == ""){texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/adpcm/snd_TXT1.adpcm"));}
        }
        if (hom != "") {ren.render(UI_FaceboxSprite);}
        


        for (int i = lbp; i < chatnumb; i++)
        {
            if (str.at(i) != str2.at(0) && str.at(i) != str2.at(1) && str.at(i) != str2.at(2)){
            if (i < blt1){
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( border + letterspace * (i - lbp), 40);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i < blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( border + letterspace * (i - blt1), 60);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i > blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( border + letterspace * (i - blt2), 80);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            
            }
            if (str2.at(0) == str.at(i) && i != blt1 && i != blt2)
            {
                if (blt1 < blt2)
                {
                    blt2 = i;
                }
                if (blt1 == blt2)
                {
                    blt1 = i;
                }
                
            }
            if (str.at(chatnumb - 1) == str2.at(1))
            {
                breakdialoge = true;
            }
            
            
            if (str2.at(2) == str.at(i))
            {
                if (i < blt1)
                {
                    UI_LetterSprite.position = Vec2(border - 20, 40);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i < blt2)
                {
                    UI_LetterSprite.position = Vec2(border - 20, 60);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i > blt2)
                {
                    UI_LetterSprite.position = Vec2(border - 20, 80);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
            }
            if (breakdialoge && padpress.Cross)
            {
                lbp = i + 1;
                blt1 = 9999;
                blt2 = 9999;
                breakdialoge = false;
            }
        }
            if (len == chatnumb && padpress.Cross)
            {
                blt1 = 9999;
                blt2 = 9999;
                lbp = 0;
                action = false;
                chatnumb = 0;
                curtalk = true;
                talkanm = 0;
                if (hom != "")
                {engine->renderer.getTextureRepository().free(facetexture1);
                engine->renderer.getTextureRepository().free(facetexture2);}
                
                event(1);
                
            }
        
        }
        
    if (tipechat == 10)
    {
        len = str.length();
        UI_ChatboxSprite.size = Vec2(800, 200);
        UI_ChatboxSprite.position = Vec2(30, 250);

        for (int i = lbp; i < chatnumb; i++)
        {
            if (str.at(i) != str2.at(0) && str.at(i) != str2.at(1) && str.at(i) != str2.at(2)){
            if (i < blt1){
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(80 + 10 * (i - lbp), 280);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i < blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(80 + 10 * (i - blt1), 300);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i > blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(80 + 10 * (i - blt2), 320);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            
            }
            if (str2.at(0) == str.at(i) && i != blt1 && i != blt2)
            {
                if (blt1 < blt2)
                {
                    blt2 = i;
                }
                if (blt1 == blt2)
                {
                    blt1 = i;
                }
                
            }
            if (str2.at(2) == str.at(i))
            {
                if (i < blt1)
                {
                    UI_LetterSprite.position = Vec2(60, 280);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i < blt2)
                {
                    UI_LetterSprite.position = Vec2(60, 300);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i > blt2)
                {
                    UI_LetterSprite.position = Vec2(60, 320);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
            }
        }
    }
    if (tipechat == 11)
        {
            string str3 = "* " + Enemy.name + " - ATK " + to_string(Enemy.att) + " DEF " + to_string(Enemy.def) + "#" + str;
            len = str3.length();
            for (int i = lbp; i < chatnumb; i++)
        {
            if (str3.at(i) != str2.at(0) && str3.at(i) != str2.at(1) && str3.at(i) != str2.at(2)){
            if (i < blt1){
            auto* e = getletter(str3, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( 80 + 10 * (i - lbp), 280);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i < blt2)
            {
            auto* e = getletter(str3, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( 80 + 10 * (i - blt1), 300);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i > blt2)
            {
            auto* e = getletter(str3, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( 80 + 10 * (i - blt2), 320);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            
            }
            if (str2.at(0) == str3.at(i) && i != blt1 && i != blt2)
            {
                if (blt1 < blt2)
                {
                    blt2 = i;
                }
                if (blt1 == blt2)
                {
                    blt1 = i;
                }
                
            }
            if (str3.at(i) == str2.at(1) && i > bdp)
            {
                breakdialoge = true;
                bdp = i;
            }
            if (str3.at(i) == str2.at(1) && i < bdp)
            {
                blt1 = 9999;
                blt2 = 9999;
                lbp = i;
            }
            if (str2.at(2) == str3.at(i))
            {
                if (i < blt1)
                {
                    UI_LetterSprite.position = Vec2(60, 280);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i < blt2)
                {
                    UI_LetterSprite.position = Vec2(60, 300);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i > blt2)
                {
                    UI_LetterSprite.position = Vec2(60, 320);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
            }
            if (breakdialoge && padpress.Cross)
            {
                blt1 = 9999;
                blt2 = 9999;
                lbp = i;
                breakdialoge = false;
            }
            if (len == chatnumb && padpress.Cross)
            {
                if (!placeholderfixtape1) {skipturn(); placeholderfixtape1 = true;}
            }
        }
        }
        if (tipechat == 12)
        {
        
        for (int i = lbp; i < chatnumb; i++)
        {
            if (str.at(i) != str2.at(0) && str.at(i) != str2.at(1) && str.at(i) != str2.at(2)){
            if (i < blt1){
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(80 + 10 * (i - lbp), 280);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i < blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(80 + 10 * (i - blt1), 300);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i > blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(80 + 10 * (i - blt2), 320);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            
            }
            if (str2.at(0) == str.at(i) && i != blt1 && i != blt2)
            {
                if (blt1 < blt2)
                {
                    blt2 = i;
                }
                if (blt1 == blt2)
                {
                    blt1 = i;
                }
                
            }
            if (str.at(chatnumb - 1) == str2.at(1))
            {
                breakdialoge = true;
            }
            
            
            if (str2.at(2) == str.at(i))
            {
                if (i < blt1)
                {
                    UI_LetterSprite.position = Vec2(60, 280);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i < blt2)
                {
                    UI_LetterSprite.position = Vec2(60, 300);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i > blt2)
                {
                    UI_LetterSprite.position = Vec2(60, 280);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
            }
            if (breakdialoge && padpress.Cross)
            {
                lbp = i + 1;
                blt1 = 9999;
                blt2 = 9999;
                breakdialoge = false;
            }
        }
            if (len == chatnumb && padpress.Cross)
            {
                if (Enemy.specialcontition == 0){BattleMenuState = 10; TL_Dummy = 0;}
                else {skipturn();}
            }
        
        }
        if (tipechat == 15)
        {
        len = str.length();
        UI_ChatboxSprite.size = Vec2(300, 200);
        UI_ChatboxSprite.position = Vec2(200, 250);
        UI_chatbubble.size = Vec2(200,200);
        UI_chatbubble.position = Vec2(Enemy.Epos.x + 75, Enemy.Epos.y);
        ren.render(UI_chatbubble);
        Color originalcol;
        originalcol = UI_LetterSprite.color;
        UI_LetterSprite.color = Color(32,32,32);
        for (int i = lbp; i < chatnumb; i++)
        {
            if (str.at(i) != str2.at(0) && str.at(i) != str2.at(1) && str.at(i) != str2.at(2)){
            if (i < blt1){
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(UI_chatbubble.position.x + 40 + 10 * (i - lbp), UI_chatbubble.position.y + 5);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i < blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(UI_chatbubble.position.x + 40 + 10 * (i - lbp), UI_chatbubble.position.y + 25);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i > blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(UI_chatbubble.position.x + 40 + 10 * (i - lbp), UI_chatbubble.position.y + 45);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            
            }
            if (str2.at(0) == str.at(i) && i != blt1 && i != blt2)
            {
                if (blt1 < blt2)
                {
                    blt2 = i;
                }
                if (blt1 == blt2)
                {
                    blt1 = i;
                }
                
            }
            if (str2.at(2) == str.at(i))
            {
                if (i < blt1)
                {
                    UI_LetterSprite.position = Vec2(60, 280);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i < blt2)
                {
                    UI_LetterSprite.position = Vec2(60, 300);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
                if (i > blt1 && i > blt2)
                {
                    UI_LetterSprite.position = Vec2(60, 320);
                    letters[57]->addLink(UI_LetterSprite.id);
                    ren.render(UI_LetterSprite);
                    letters[57]->removeLinkById(UI_LetterSprite.id);
                }
            }
        }
        UI_LetterSprite.color = originalcol;
        }
            
    

    if (len > chatnumb && !breakdialoge){
    
    if (hom != "" && tipechat == 0 && curhom == hom && action)
    {
        if (talkanm == 0)
        {
            auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(UI_FaceboxSprite.id);
            remtex->removeLinkById(UI_FaceboxSprite.id);
            facetexture2->addLink(UI_FaceboxSprite.id);
        }
        if (talkanm == 10)
        {
            auto* remtex = engine->renderer.getTextureRepository().getBySpriteId(UI_FaceboxSprite.id);
            remtex->removeLinkById(UI_FaceboxSprite.id);
            facetexture1->addLink(UI_FaceboxSprite.id);
        }
        talkanm++;
        if (talkanm > 20)
        {
            talkanm  = 0;
        }
    }
    if (sontiming == true) 
    {
        chatnumb++;
        u8 ch = getavailablechanel();
        engine->audio.adpcm.setVolume(50, ch);
        engine->audio.adpcm.tryPlay(texnoise, ch);
        sontiming = false;
    }
    else {sontiming = true;}
    }
    
}


void tale::fontunload()
{
  for (int i = 0; i < 40; i++)
  {
    engine->renderer.getTextureRepository().free(letters[i]);
  }
  engine->renderer.getTextureRepository().free(dialogebox);
}
void tale::fontload(int num)
{
    auto pathdialo = FileUtils::fromCwd("sprites/dialoguebox.png");
    auto heart = FileUtils::fromCwd("sprites/battle/spr_heart_0.png");
    auto her = FileUtils::fromCwd("sprites/battle/spr_heart_1.png");
    heart1 = engine->renderer.getTextureRepository().add(heart);
    heart2 = engine->renderer.getTextureRepository().add(her);
    heart1->addLink(PlayerHeart.id);
    PlayerHeart.size = Vec2(12,12);
    PlayerHeart.mode = MODE_STRETCH;


    dialogebox = engine->renderer.getTextureRepository().add(pathdialo);
    dialogebox->addLink(UI_ChatboxSprite.id);
    
    UI_LetterSprite.size = Vec2(24,24);
    UI_ChatboxSprite.mode = MODE_STRETCH;
    UI_FaceboxSprite.mode = MODE_STRETCH;
    UI_LetterSprite.mode = MODE_STRETCH;
    
 if (num == 0)
 {
    auto patha = FileUtils::fromCwd("sprites/fonts/default/a.png");
    auto pathb = FileUtils::fromCwd("sprites/fonts/default/b.png");
    auto pathc = FileUtils::fromCwd("sprites/fonts/default/c.png");
    auto pathd = FileUtils::fromCwd("sprites/fonts/default/d.png");
    auto pathe = FileUtils::fromCwd("sprites/fonts/default/e.png");
    auto pathf = FileUtils::fromCwd("sprites/fonts/default/f.png");
    auto pathg = FileUtils::fromCwd("sprites/fonts/default/g.png");
    auto pathh = FileUtils::fromCwd("sprites/fonts/default/h.png");
    auto pathi = FileUtils::fromCwd("sprites/fonts/default/i.png");
    auto pathj = FileUtils::fromCwd("sprites/fonts/default/j.png");
    auto pathk = FileUtils::fromCwd("sprites/fonts/default/k.png");
    auto pathl = FileUtils::fromCwd("sprites/fonts/default/l.png");
    auto pathm = FileUtils::fromCwd("sprites/fonts/default/m.png");
    auto pathn = FileUtils::fromCwd("sprites/fonts/default/n.png");
    auto patho = FileUtils::fromCwd("sprites/fonts/default/o.png");
    auto pathp = FileUtils::fromCwd("sprites/fonts/default/p.png");
    auto pathq = FileUtils::fromCwd("sprites/fonts/default/q.png");
    auto pathr = FileUtils::fromCwd("sprites/fonts/default/r.png");
    auto paths = FileUtils::fromCwd("sprites/fonts/default/s.png");
    auto patht = FileUtils::fromCwd("sprites/fonts/default/t.png");
    auto pathu = FileUtils::fromCwd("sprites/fonts/default/u.png");
    auto pathv = FileUtils::fromCwd("sprites/fonts/default/v.png");
    auto pathw = FileUtils::fromCwd("sprites/fonts/default/w.png");
    auto pathx = FileUtils::fromCwd("sprites/fonts/default/x.png");
    auto pathy = FileUtils::fromCwd("sprites/fonts/default/y.png");
    auto pathz = FileUtils::fromCwd("sprites/fonts/default/z.png");
    auto pathdot = FileUtils::fromCwd("sprites/fonts/default/dot.png");
    auto pathveg = FileUtils::fromCwd("sprites/fonts/default/virg.png");
    auto pathexc = FileUtils::fromCwd("sprites/fonts/default/exc.png");
    auto pathint = FileUtils::fromCwd("sprites/fonts/default/question.png");
    auto patham = FileUtils::fromCwd("sprites/fonts/default/am.png");
    auto pathbm = FileUtils::fromCwd("sprites/fonts/default/bm.png");
    auto pathcm = FileUtils::fromCwd("sprites/fonts/default/cm.png");
    auto pathdm = FileUtils::fromCwd("sprites/fonts/default/dm.png");
    auto pathem = FileUtils::fromCwd("sprites/fonts/default/em.png");
    auto pathfm = FileUtils::fromCwd("sprites/fonts/default/fm.png");
    auto pathgm = FileUtils::fromCwd("sprites/fonts/default/gm.png");
    auto pathhm = FileUtils::fromCwd("sprites/fonts/default/hm.png");
    auto pathim = FileUtils::fromCwd("sprites/fonts/default/im.png");
    auto pathjm = FileUtils::fromCwd("sprites/fonts/default/jm.png");
    auto pathkm = FileUtils::fromCwd("sprites/fonts/default/km.png");
    auto pathlm = FileUtils::fromCwd("sprites/fonts/default/lm.png");
    auto pathmm = FileUtils::fromCwd("sprites/fonts/default/mm.png");
    auto pathnm = FileUtils::fromCwd("sprites/fonts/default/nm.png");
    auto pathom = FileUtils::fromCwd("sprites/fonts/default/om.png");
    auto pathpm = FileUtils::fromCwd("sprites/fonts/default/pm.png");
    auto pathqm = FileUtils::fromCwd("sprites/fonts/default/qm.png");
    auto pathrm = FileUtils::fromCwd("sprites/fonts/default/rm.png");
    auto pathsm = FileUtils::fromCwd("sprites/fonts/default/sm.png");
    auto pathtm = FileUtils::fromCwd("sprites/fonts/default/tm.png");
    auto pathum = FileUtils::fromCwd("sprites/fonts/default/um.png");
    auto pathvm = FileUtils::fromCwd("sprites/fonts/default/vm.png");
    auto pathwm = FileUtils::fromCwd("sprites/fonts/default/wm.png");
    auto pathxm = FileUtils::fromCwd("sprites/fonts/default/xm.png");
    auto pathym = FileUtils::fromCwd("sprites/fonts/default/ym.png");
    auto pathzm = FileUtils::fromCwd("sprites/fonts/default/zm.png");
    auto pathspace = FileUtils::fromCwd("sprites/fonts/default/space.png");
    auto pathstar = FileUtils::fromCwd("sprites/fonts/default/star.png");
    auto path1 = FileUtils::fromCwd("sprites/fonts/default/1.png");
    auto path2 = FileUtils::fromCwd("sprites/fonts/default/2.png");
    auto path3 = FileUtils::fromCwd("sprites/fonts/default/3.png");
    auto path4 = FileUtils::fromCwd("sprites/fonts/default/4.png");
    auto path5 = FileUtils::fromCwd("sprites/fonts/default/5.png");
    auto path6 = FileUtils::fromCwd("sprites/fonts/default/6.png");
    auto path7 = FileUtils::fromCwd("sprites/fonts/default/7.png");
    auto path8 = FileUtils::fromCwd("sprites/fonts/default/8.png");
    auto path9 = FileUtils::fromCwd("sprites/fonts/default/9.png");
    auto path0 = FileUtils::fromCwd("sprites/fonts/default/0.png");
    auto pathslash = FileUtils::fromCwd("sprites/fonts/default/slash.png");
    auto pathasp = FileUtils::fromCwd("sprites/fonts/default/asps.png");
    auto pathtrac = FileUtils::fromCwd("sprites/fonts/default/-.png");
    auto pathhashtag = FileUtils::fromCwd("sprites/fonts/default/#.png");
    auto pathmoney = FileUtils::fromCwd("sprites/fonts/default/$.png");

    auto path1d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_1.png");
    auto path2d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_2.png");
    auto path3d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_3.png");
    auto path4d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_4.png");
    auto path5d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_5.png");
    auto path6d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_6.png");
    auto path7d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_7.png");
    auto path8d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_8.png");
    auto path9d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_9.png");
    auto path0d = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgnum_0.png");
    auto pathmiss = FileUtils::fromCwd("sprites/fonts/damage/spr_dmgmiss.png");


    letters[0] = engine->renderer.getTextureRepository().add(patha);
    letters[1] = engine->renderer.getTextureRepository().add(pathb);
    letters[2] = engine->renderer.getTextureRepository().add(pathc);
    letters[3] = engine->renderer.getTextureRepository().add(pathd);
    letters[4] = engine->renderer.getTextureRepository().add(pathe);
    letters[5] = engine->renderer.getTextureRepository().add(pathf);
    letters[6] = engine->renderer.getTextureRepository().add(pathg);
    letters[7] = engine->renderer.getTextureRepository().add(pathh);
    letters[8] = engine->renderer.getTextureRepository().add(pathi);
    letters[9] = engine->renderer.getTextureRepository().add(pathj);
    letters[10] = engine->renderer.getTextureRepository().add(pathk);
    letters[11] = engine->renderer.getTextureRepository().add(pathl);
    letters[12] = engine->renderer.getTextureRepository().add(pathm);
    letters[13] = engine->renderer.getTextureRepository().add(pathn);
    letters[14] = engine->renderer.getTextureRepository().add(patho);
    letters[15] = engine->renderer.getTextureRepository().add(pathp);
    letters[16] = engine->renderer.getTextureRepository().add(pathq);
    letters[17] = engine->renderer.getTextureRepository().add(pathr);
    letters[18] = engine->renderer.getTextureRepository().add(paths);
    letters[19] = engine->renderer.getTextureRepository().add(patht);
    letters[20] = engine->renderer.getTextureRepository().add(pathu);
    letters[21] = engine->renderer.getTextureRepository().add(pathv);
    letters[22] = engine->renderer.getTextureRepository().add(pathw);
    letters[23] = engine->renderer.getTextureRepository().add(pathx);
    letters[24] = engine->renderer.getTextureRepository().add(pathy);
    letters[25] = engine->renderer.getTextureRepository().add(pathz);
    letters[26] = engine->renderer.getTextureRepository().add(pathdot);
    letters[27] = engine->renderer.getTextureRepository().add(pathveg);
    letters[28] = engine->renderer.getTextureRepository().add(pathexc);
    letters[29] = engine->renderer.getTextureRepository().add(pathint);
    letters[30] = engine->renderer.getTextureRepository().add(patham);
    letters[31] = engine->renderer.getTextureRepository().add(pathbm);
    letters[32] = engine->renderer.getTextureRepository().add(pathcm);
    letters[33] = engine->renderer.getTextureRepository().add(pathdm);
    letters[34] = engine->renderer.getTextureRepository().add(pathem);
    letters[35] = engine->renderer.getTextureRepository().add(pathfm);
    letters[36] = engine->renderer.getTextureRepository().add(pathgm);
    letters[37] = engine->renderer.getTextureRepository().add(pathhm);
    letters[38] = engine->renderer.getTextureRepository().add(pathim);
    letters[39] = engine->renderer.getTextureRepository().add(pathjm);
    letters[40] = engine->renderer.getTextureRepository().add(pathkm);
    letters[41] = engine->renderer.getTextureRepository().add(pathlm);
    letters[42] = engine->renderer.getTextureRepository().add(pathmm);
    letters[43] = engine->renderer.getTextureRepository().add(pathnm);
    letters[44] = engine->renderer.getTextureRepository().add(pathom);
    letters[45] = engine->renderer.getTextureRepository().add(pathpm);
    letters[46] = engine->renderer.getTextureRepository().add(pathqm);
    letters[47] = engine->renderer.getTextureRepository().add(pathrm);
    letters[48] = engine->renderer.getTextureRepository().add(pathsm);
    letters[49] = engine->renderer.getTextureRepository().add(pathtm);
    letters[50] = engine->renderer.getTextureRepository().add(pathum);
    letters[51] = engine->renderer.getTextureRepository().add(pathvm);
    letters[52] = engine->renderer.getTextureRepository().add(pathwm);
    letters[53] = engine->renderer.getTextureRepository().add(pathxm);
    letters[54] = engine->renderer.getTextureRepository().add(pathym);
    letters[55] = engine->renderer.getTextureRepository().add(pathzm);
    letters[56] = engine->renderer.getTextureRepository().add(pathspace);
    letters[57] = engine->renderer.getTextureRepository().add(pathstar);
    letters[58] = engine->renderer.getTextureRepository().add(path1);
    letters[59] = engine->renderer.getTextureRepository().add(path2);
    letters[60] = engine->renderer.getTextureRepository().add(path3);
    letters[61] = engine->renderer.getTextureRepository().add(path4);
    letters[62] = engine->renderer.getTextureRepository().add(path5);
    letters[63] = engine->renderer.getTextureRepository().add(path6);
    letters[64] = engine->renderer.getTextureRepository().add(path7);
    letters[65] = engine->renderer.getTextureRepository().add(path8);
    letters[66] = engine->renderer.getTextureRepository().add(path9);
    letters[67] = engine->renderer.getTextureRepository().add(path0);
    letters[68] = engine->renderer.getTextureRepository().add(pathslash);
    letters[69] = engine->renderer.getTextureRepository().add(pathasp);
    letters[70] = engine->renderer.getTextureRepository().add(pathtrac);
    letters[71] = engine->renderer.getTextureRepository().add(pathhashtag);
    letters[72] = engine->renderer.getTextureRepository().add(pathmoney);

    letters[73] = engine->renderer.getTextureRepository().add(path1d);
    letters[74] = engine->renderer.getTextureRepository().add(path2d);
    letters[75] = engine->renderer.getTextureRepository().add(path3d);
    letters[76] = engine->renderer.getTextureRepository().add(path4d);
    letters[77] = engine->renderer.getTextureRepository().add(path5d);
    letters[78] = engine->renderer.getTextureRepository().add(path6d);
    letters[79] = engine->renderer.getTextureRepository().add(path7d);
    letters[80] = engine->renderer.getTextureRepository().add(path8d);
    letters[81] = engine->renderer.getTextureRepository().add(path9d);
    letters[82] = engine->renderer.getTextureRepository().add(path0d);
    letters[83] = engine->renderer.getTextureRepository().add(pathmiss);

 }
}


Texture* tale::getletter(string str, int wich)
{
    string str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ.,!?abcdefghijklmnopqrstuvwxyz *1234567890/'-#$";
    for (int i = 0; i < 73; i++){
    if (str.at(wich) == str2.at(i)) {return(letters[i]);}
    }
    return letters[71];
}

int tale::getavailablechanel()
{
    return(currentchannel);
    currentchannel++;
    if (currentchannel > 23)
    {
        currentchannel = 0;
    }
    
}

void tale::chatstart(int chatid)
{
    hom = "";
    tipechat = 0;
    str = "Error!";
    if (chatid == 0)
    {
        str = "*Only the fearless may proceed.#*Brave ones, foolish ones.#*Both walk not the middle road.";
    }
    if (chatid == 1)
    {
        str = "*Stay on the path.";
    }
    if (chatid == 2)
    {
        str = "*Press X to read signs!";
    }
    if (chatid == 3)
    {
        str = "*The western room is the#eastern room's blueprint.";
    }
    if (chatid == 4)
    {
        str = "*Ribbit. Ribbit.#*Excuse me, human$*I have some advice#for you about battling#monsters.$*If you ACT a certain way#or FIGHT util you#almost defeat them...$*They might not want to#battle anymore.$*If a monster does not#want to fight you, please...$*Use some MERCY, human.#*Ribbit.";
    }
    if (chatid == 5)
    {
        str = "*The western room is the#eastern room's blueprint.";
    }
    if (chatid == 6)
    {
        event(9);
    }
    if (chatid == 7)
    {
        event(10);
    }
    if (chatid == 8)
    {
        str = "*Please press this switch.#              #         -TORIEL";
    }
    if (chatid == 9)
    {
        str = "*Please press this switch#too.              #         -TORIEL";
    }
    if (chatid == 10)
    {
        str = "*This lever doesn't even work.";
        if (TEvent == 10)
        {
        hom = "toriel_side";
        str = "*No no no!$*You want to press the#other switch.$*I even labelled it for#you...";
        }
    }
    if (chatid == 11)
    {
        if (TEvent == 13) {battlestart(0); NumOfCol--;}
    }
    if (chatid != 6 && chatid != 7 && chatid != 11)
    action = true;

}

}