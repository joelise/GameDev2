#pragma once
#include "Spells.h"
class IceSpell :
    public Spells
{
public:
    void CastSpell() override;
    void Dispel() override;
    ~IceSpell() override;
};

