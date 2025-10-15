#include "bart2023.h"
#include "game.h"

namespace PXL2023
{

Bart::Bart(unsigned char instance) : Player( instance )
{

}

int Bart::willYouRaise(unsigned int totalBet)
{
    int i = 0;
    if( bluffMyAssOff() )
    {
        return getChips();
    }
    for( Player * player : getGame()->getPlayers() )
    {
        if( maxBet[ i ] < player->getBet() )
            maxBet[ i ] = player->getBet();
        i++;
    }
    if( getRank().getCategory() >= TWO_PAIR )
    {
        return getChips();
    }
    return 0;
}

bool Bart::bluffMyAssOff()
{
    return ((rand()%(1+100*instance*instance)) == 0);
}

}
