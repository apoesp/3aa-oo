#include "Polymon.h"

Polymon::Polymon(std::string n, int s, int hp) : _name(n) {}

void Polymon::addAttack(std::string name, int points, int damage)
{
}

std::string Polymon::getName()
{
	return _name;
}
