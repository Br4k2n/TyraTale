#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::battlestart(int monsid)
{
Enemyinfo enf;
music = 99999;
if (monsid == 0)
{
    enf.name = "Dummy";
    enf.encountertex = "*You encountered the Dummy.";
    enf.neutral1 = "*Dummy stands around #absentmindedly.";
    enf.neutral2 = "*Dummy looks like it's #about to fall over.";
    enf.textpath = FileUtils::fromCwd("sprites/Characters/dummy/Dummy.png");
    enf.dmgtextpath = FileUtils::fromCwd("sprites/Characters/dummy/Dummy_defeat.png");
    enf.musicpath = FileUtils::fromCwd("Sounds/Anticipation.wav");
    enf.check = "*A cotton heart and a button eye. #*You are the apple of my eye.";
    enf.spech1 = ". . . . .";
    enf.spech2 = ". . . . .";
    enf.spech3 = ". . . . .";
    enf.actaction[0] = "*You talk to the dummy.#*...$*It doesn't seem much for#conversation.$*TORIEL seems happy with you.";
    enf.hostile = false;
    enf.numactoptions = 1;
    enf.specialcontition = 0;
    enf.adcdiag = "*Dummy tires of your aimless shenanigans.";
    enf.actoption[0] = "*Talk";
}
if (monsid == 1)
{
    enf.name = "Froggit";
    enf.att = 5;
    enf.def = 4;
    enf.maxhp = 20;
    enf.currhp = 20;
    enf.encountertex = "*Froggit attacks you!";
    enf.neutral1 = "*You are intimidated by#Froggit's raw strength.                             #Only kidding.";
    enf.neutral2 = "*Froggit hops to and fro.";
    enf.textpath = FileUtils::fromCwd("sprites/Characters/Froggit/spr_placeholder.png");
    enf.dmgtextpath = FileUtils::fromCwd("sprites/Characters/Froggit/spr_froggit_1.png");
    enf.musicpath = FileUtils::fromCwd("Sounds/009-Enemy-Approaching.wav");
    enf.check = "*Life is difficult for this enemy.";
    enf.spech1 = "Ribbit, ribbit.";
    enf.spech2 = "Croak, croak";
    enf.hostile = false;
}
if (monsid == 2)
{
    enf.name = "Froggit";
    enf.att = 5;
    enf.def = 4;
    enf.maxhp = 40;
    enf.currhp = 40;
    enf.encountertex = "*Froggit hopped close!";
    enf.neutral1 = "*You are intimidated by#Froggit's raw strength.                             #Only kidding.";
    enf.neutral2 = "*Froggit hops to and fro.";
    enf.textpath = FileUtils::fromCwd("sprites/Characters/Froggit/spr_placeholder.png");
    enf.dmgtextpath = FileUtils::fromCwd("sprites/Characters/Froggit/spr_froggit_1.png");
    enf.musicpath = FileUtils::fromCwd("Sounds/009-Enemy-Approaching.wav");
    enf.check = "*Life is difficult for this enemy.";
    enf.spech1 = "Ribbit, ribbit.";
    enf.spech2 = "Croak, croak";
    enf.hostile = false;
}

Enemy = enf;
GameState = 1;
}
}