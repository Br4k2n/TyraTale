#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::event(int event)
{
if (TEvent == event){
        if (event == 0)
    {   
        str = "*Howdy!$*I'm FLOWEY.#*FLOWEY the FLOWER!$*Hm...$*You're new to the#UNDERGROUND, aren'tcha?$*Golly, you must be#so confused.$*Someone ought to teach#you how things work#around here!$*I guess little old me#have to do.$*Ready?#*Here we go!";
        tipechat = 0;
        action = true;
        hom = 1;
        texnoise = engine->audio.adpcm.load(FileUtils::fromCwd("Sounds/effects/snd_flowey1.adpcm"));
        engine->audio.song.load(FileUtils::fromCwd("Sounds/Your-Best-Friend.wav"));
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
    }
    if (hom == 1)
    {
        auto patha = FileUtils::fromCwd("sprites/Characters/Flowey/neutral1.png");
        auto pathb = FileUtils::fromCwd("sprites/Characters/Flowey/neutral2.png");
        facetexture1 = engine->renderer.getTextureRepository().add(patha);
        facetexture2 = engine->renderer.getTextureRepository().add(pathb);
        facetexture1->addLink(UI_FaceboxSprite.id);
    }
}
}


}