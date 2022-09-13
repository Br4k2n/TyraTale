#include "Undertale.hpp"

namespace tale
{
using namespace Tyra;

void tale::event(int event)
{
std::string form = "$#";
int ident = 0;



if (event == 0)
{
    str = "Howdy!$I'm FLOWEY.$FLOWEY the FLOWER!#Hm...#You're new to the$UNDERGROUND, aren'tcha?#Golly, you must be$so confused.#Someone ought to teach$you how things work around here!#I guess little old me have to do.#Ready?$Here we go!";
    for (int i = 0; i <= std::size(str); i ++)
    {
        if (str.at(i) == form.at(0))
        {
            texformat[ident] = Vec2(i, 1);
            ident++;
        }
        else if (str.at(i) == form.at(1))
        {
            texformat[ident] = Vec2(i, 2);
            ident++;
        }
        else
        {
            texformat[ident] = Vec2(i, 0);
        }
    }
}

}


}