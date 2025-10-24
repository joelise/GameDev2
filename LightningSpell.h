#pragma once
#include "Spells.h"
class LightningSpell :
    public Spells
{
public:
    void CastSpell() override;
    void Dispel() override;
    ~LightningSpell() override;
};

