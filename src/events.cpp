#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::event(int event)
{
if (TEvent == event){
        if (event == 0)
    {   
        str = "Howdy!$Im FLOWEY.#FLOWEY the FLOWER!$Hm...$Youre new to the#UNDERGROUND, arentcha?$Golly, you must be#so confused.$Someone ought to teach#you how things work#around here!$I guess little old me#have to do.$Ready?#Here we go!$";
        tipechat = 0;
        action = true;
        hom = 1;
        engine->audio.song.load(FileUtils::fromCwd("Sounds/Your-Best-Friend.wav"));
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
    }
    if (hom == 1)
    {
        auto patha = FileUtils::fromCwd("sprites/Characters/Flowey/neutral1.png");
        Texture* tex = engine->renderer.getTextureRepository().add(patha);
        tex->addLink(UI_FaceboxSprite.id);
    }
}
}


}