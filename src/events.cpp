#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::event(int event)
{
if (TEvent == event)
{
    if (event == 0)
    {   
        str = "*Howdy!$*I'm FLOWEY.#FLOWEY the FLOWER!*$*Hm...$*You're new to the#UNDERGROUND, aren'tcha?$*Golly, you must be#so confused.$*Someone ought to teach#you how things work#around here!$*I guess little old me#have to do.$*Ready?#*Here we go!";
        tipechat = 0;
        action = true;
        hom = 1;
        engine->audio.song.load(FileUtils::fromCwd("Sounds/Your-Best-Friend.wav"));
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
        TEvent = 1; 
    }
    if (event == 1)
    {   
        str = "*What a terrible creature#torturing such a poor, #inocent youth...$*Ah, do not be afraid,#my child.$*I am TORIEL,#caretaker of the RUINS.$*I pass through here everyday#to see if anyone has fallen down.$*You are the first human#to come here in a#long time.$*Come!#I will guide you through the#catacombs.$*This way.";
        tipechat = 0;
        action = true;
        hom = 2;
        TEvent = 2;
        engine->audio.song.stop();
        engine->audio.song.load(FileUtils::fromCwd("Sounds/Fallen-Down.wav"));
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
    }
    if (event == 2)
    {   
        str = "*Welcome to your new#home, innocent one.$*Allow me to educate you#in the operation of the#RUINS.$*The RUINS are full of#puzzles.$*Ancient fusions bettwen#diversions and door keys.$*One must solve them#to move from room to#room$*Please adjust yourself#to the sight of them.";
        tipechat = 0;
        action = true;
        hom = 2;
        TEvent = 3;
    }
    if (event == 3)
    {   
        str = "*To make progress here,#you will need to trigger#several switches.$*Do not worry, I have#labelled the ones that#you need to flip.";
        tipechat = 0;
        action = true;
        hom = 2;
        TEvent = 4;
    }
    if (event == 4)
    {   
        str = "*As a human living in#the UNDERGROUND,#monsters may attack you.$*You will need to be#prepared for this#situation.$*However, worry not!#*The process is simple.$*When you encounter a#monster, you will enter#a FIGHT.$*While you are in a#FIGHT, strike up a#friendly conversation.$*Stall for time.#I will come to resolve#the conflict.$*Practice talking to#the dummy.";
        tipechat = 0;
        action = true;
        hom = 2;
        TEvent = 5;
    }

}
}


}