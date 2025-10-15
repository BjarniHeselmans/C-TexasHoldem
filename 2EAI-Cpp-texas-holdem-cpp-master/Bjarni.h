#ifndef BJARNI_H
#define BJARNI_H
#include "player.h"

namespace PXL2024
{
class Bjarni : public Player
{
public:
    Bjarni(unsigned char instance = 0) : Player(instance) {}
    virtual const char* getName(void) const override;
    virtual int willYouRaise(unsigned int totalBet) override;
};
}
#endif
