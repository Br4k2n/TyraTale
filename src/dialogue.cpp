#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::dialogue(Vec4 vec, int dialogue)
{
std::string str;
std::string form = "$#";
Vec2 formating[100];
int ident = 0;

if (dialogue == 0)
{
    str = "Howdy!$I'm FLOWEY.$FLOWEY the FLOWER!#Hm...#You're new to the$UNDERGROUND, aren'tcha?#Golly, you must be$so confused.#Someone ought to teach$you how things work around here!#I guess little old me have to do.#Ready?$Here we go!";
    for (int i = 0; i <= 0; i ++)
    {
        if (str.at(i) == form.at(0))
        {
            formating[ident] = Vec2(i, 1);
            ident++;
        }
        else if (str.at(i) == form.at(1))
        {
            formating[ident] = Vec2(i, 2);
            ident++;
        }
        else
        {
            formating[ident] = Vec2(i, 0);
        }
    }

}

}

void tale::drawtext()
{
    std::string str2 = "#$@";
    auto& ren = engine->renderer.renderer2D;
    float border;
    int len = str.length();
    const auto& padpress = engine->pad.getClicked();

    if (tipechat == 0)
    {
        UI_ChatboxSprite.size = Vec2(800, 200);
        UI_ChatboxSprite.position = Vec2(10, 10);
        UI_FaceboxSprite.size = Vec2(120, 120);
        UI_FaceboxSprite.position = Vec2(20, 20);
        ren.render(UI_ChatboxSprite);
        if (hom == 0) { border = 0; } else { border = 100; }
        if (hom == 1)
        {
            ren.render(UI_FaceboxSprite);
        }
        for (int i = lbp; i < chatnumb; i++)
        {
            if (str.at(i) != str2.at(0) && str.at(i) != str2.at(1) && str.at(i) != str2.at(2)){
            if (i < blt1){
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( border + 15 * (i - lbp), 20);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i < blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( border + 15 * (i - blt1), 60);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i > blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2( border + 15 * (blt2 + i - lbp), 100);
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
            if (str.at(i) == str2.at(1) && i > bdp)
            {
                breakdialoge = true;
                bdp = i;
            }
            if (str.at(i) == str2.at(1) && i < bdp)
            {
                blt1 = 9999;
                blt2 = 9999;
                lbp = i;
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
                blt1 = 9999;
                blt2 = 9999;
                lbp = 0;
                action = false;
                chatnumb = 0;
                if (TEvent == 0)
                {
                    engine->audio.song.stop();
                    engine->audio.song.load(FileUtils::fromCwd("Sounds/Fallen-Down.wav"));
                    engine->audio.song.inLoop = true;
                    engine->audio.song.setVolume(60);
                    engine->audio.song.play();
                    GameState = 0;
                    TEvent = 2;
                }
            }
        }
    }
    if (tipechat == 10)
    {
        UI_ChatboxSprite.size = Vec2(800, 200);
        UI_ChatboxSprite.position = Vec2(30, 250);
        ren.render(UI_ChatboxSprite);

        for (int i = lbp; i < chatnumb; i++)
        {
            if (str.at(i) != str2.at(0) && str.at(i) != str2.at(1) && str.at(i) != str2.at(2)){
            if (i < blt1){
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(40 + 15 * (i - lbp), 260);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i < blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(40 + 15 * (i - blt1), 300);
            ren.render(UI_LetterSprite);
            auto* textremove = engine->renderer.getTextureRepository().getBySpriteId(UI_LetterSprite.id);
            textremove->removeLinkById(UI_LetterSprite.id);
            }
            if (i > blt1 && i > blt2)
            {
            auto* e = getletter(str, i);
            e->addLink(UI_LetterSprite.id);
            UI_LetterSprite.position = Vec2(40 + 15 * (blt2 + i - lbp), 340);
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
        }
    }

    if (len > chatnumb && !breakdialoge){
    chatnumb+= 0.5F;
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
    dialogebox = engine->renderer.getTextureRepository().add(pathdialo);
    dialogebox->addLink(UI_ChatboxSprite.id);
    letters[0]->addLink(UI_LetterSprite.id);
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

    
 }
}


Texture* tale::getletter(std::string str, int wich)
{
std::string str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ.,!?abcdefghijklmnopqrstuvwxyz "; 
for (int i = 0; i < 57; i++){
if (str.at(wich) == str2.at(i)) {return(letters[i]);}
}
return(0);
}
}