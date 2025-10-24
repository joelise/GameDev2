#pragma once
#include "Spells.h"
class FireSpell :
    public Spells
{
public:
    void CastSpell() override;
    void Dispel() override;
    ~FireSpell() override;
};

