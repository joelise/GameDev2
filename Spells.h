#pragma once
#include <iostream>
#include <string>

class Spells
{
public:
	virtual void CastSpell();
	virtual void Dispel();
	virtual ~Spells() {}
};

