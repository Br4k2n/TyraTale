#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

bool tale::dialogue(Vec4 vec, int dialogue)
{
std::string str;
std::string form = "$#";
Vec2 formating[100];
int ident = 0;

if (dialogue == 0)
{
    str = "Howdy!$I'm FLOWEY.$FLOWEY the FLOWER!#Hm...#You're new to the$UNDERGROUND, aren'tcha?#Golly, you must be$so confused.#Someone ought to teach$you how things work around here!#I guess little old me have to do.#Ready?$Here we go!";
    for (int i = 0; i <= std::size(str); i ++)
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

void tale::drawtext(std::string str, int dialogetype, int hom)
{
    auto& ren = engine->renderer.renderer2D;

    if (dialogetype == 0)
    {
        ren.render(Spritebox);
        

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
    auto pathdialo = FileUtils::fromCwd("sprites/fonts/default/a.png");
    dialogebox = engine->renderer.getTextureRepository().add(pathdialo);
    dialogebox->addLink(Spritebox.id);
    Spritebox.position = Vec2(10, 10);
    Spritebox.size = Vec2(492, 300);
    
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

    
 }
}


Texture* tale::getletter(std::string str)
{
std::string str2 = "abcdefghijklmnopqrstuvwxyz.,!?"; 

for (int i = 0; i < 40; i++){
if (str.at(0) == str2.at(i)) {return(letters[i]);}
}
}
}