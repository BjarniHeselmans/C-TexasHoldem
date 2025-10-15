#ifndef BART2023_H
#define BART2023_H

#include "player.h"
namespace PXL2023
{
class Bart : public Player
{
public:
    Bart( unsigned char instance = 0 );
    const char *getName() const { return "Bart 2023"; }

protected:
    int willYouRaise(unsigned int totalBet);

private:
    bool bluffMyAssOff();
    int maxBet[10];
};
}

#endif // BART2023_H
