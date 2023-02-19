#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::event(int event)
{
if (TEvent == event)
{
    TYRA_LOG("Event EXECUTED.");
    if (event == 0)
    {   
        str = "*Howdy!$*I'm FLOWEY.#*FLOWEY the FLOWER!$*Hm...$*You're new to the#UNDERGROUND, aren'tcha?$*Golly, you must be#so confused.$*Someone ought to teach#you how things work#around here!$*I guess little old me#have to do.$*Ready?#*Here we go!";
        tipechat = 0;
        action = true;
        hom = "flowey_neutral";
        engine->audio.song.load(FileUtils::fromCwd("Sounds/Your-Best-Friend.wav"));
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
        TEvent = 1; 
    }
    if (event == 1)
    {   
        str = "*What a terrible creature#torturing such a poor, #inocent youth...$*Ah, do not be afraid,#my child.$*I am TORIEL,#caretaker of the RUINS.$*I pass through here everyday#to see if anyone has fallen#down.$*You are the first human#to come here in a#long time.$*Come!#I will guide you through the#catacombs.$*This way.";
        setinstance(Vec2(46, 300), 1);
        tipechat = 0;
        action = true;
        hom = "toriel_neutral";
        TEvent = 2;
        engine->audio.song.stop();
        engine->audio.song.load(FileUtils::fromCwd("Sounds/Fallen-Down.wav"));
        engine->audio.song.inLoop = true;
        engine->audio.song.setVolume(60);
        engine->audio.song.play();
    }
    if (event == 2 || event == 3 || event == 4 || event == 5)
    {   
        TEvent++;
    }
    if (event == 6)
    {   
        str = "*Welcome to your new#home, innocent one.$*Allow me to educate you#in the operation of the#RUINS.";
        tipechat = 0;
        action = true;
        hom = "toriel_neutral";
        TEvent = 7;
    }
    if (event == 7)
    {   
        str = "*The RUINS are full of#puzzles.$*Ancient fusions bettwen#diversions and door keys.$*One must solve them#to move from room to#room$*Please adjust yourself#to the sight of them.";
        tipechat = 0;
        action = true;
        hom = "toriel_neutral";
        TEvent = 8;
    }
    if (event == 8)
    {   
        str = "*To make progress here,#you will need to trigger#several switches.$*Do not worry, I have#labelled the ones that#you need to flip.";
        tipechat = 0;
        action = true;
        hom = "toriel_neutral";
        TEvent = 9;
        setcolissioninmap(618, -36, 790, 52);//19
    }
    if (event == 9)
    {   
        
        TEvent = 10;
        instances[0].dir = 1;
        NumOfCol--;
        setcolissioninmap(1058, -32, 1200, 52);//19
    }
    if (event == 10)
    {   
        TEvent = 11;
        instances[1].dir = 1;
        NumOfCol--;
    }
    if (event == 11)
    {   
        str = "*Explendid!#*I am proud of you,#little one.$Let us move to the#next room.";
        tipechat = 0;
        action = true;
        hom = "toriel_happy";
        TEvent = 12;
    }
    if (event == 12)
    {   
        str = "*As a human living in#the UNDERGROUND,#monsters may attack you.$*You will need to be#prepared for this#situation.$*However, worry not!#*The process is simple.$*When you encounter a#monster, you will enter#a FIGHT.$*While you are in a#FIGHT, strike up a#friendly conversation.$*Stall for time.#I will come to resolve#the conflict.$*Practice talking to#the dummy.";
        tipechat = 0;
        action = true;
        hom = "toriel_neutral";
        TEvent = 13;
    }
    if (event == 14)
    {   
        if (TL_Dummy == 0) str = "*Ah, very good!#*You are very good.";
        if (TL_Dummy == 1) str = "*Ahh.. the dummies are#not for fighting!#*They are for talking!$*We do not want to hurt#anybody, do we...?#*Come now.";
        if (TL_Dummy == 2) str = "*...$*...$*The next room awaits.";
        if (TL_Dummy == 3) str = "*...$*... you ran away...$*Truthfully, that was not#a poor choice.$*It is better to#avoid conflict#whenever possible.$*That... however, is#only a dummy.#*It cannot harm you,$*It is only made of cotton.#*It has no desire#for revenge...$*Nevermind.#*Stay close to me and#I will keep you safe.";
        tipechat = 0;
        action = true;
        hom = "toriel_neutral";
        TEvent = 15;
    }
    if (event == 99)
    {   
        str = "...";
        tipechat = 0;
        action = true;
        hom = "";
        TEvent = 8;
    }
    

}
}


}