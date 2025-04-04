#include "Polymon.h"

Polymon::Polymon(std::string name, int speed, int hp) : _name(name), _speed(speed), _hp(hp){}

void Polymon::addAttack(std::string name, int points, int damage)
{
	_attacks.push_back(Attack(name, points, damage));
}

std::string Polymon::getName() const
{
	return _name;
}

int Polymon::getSpeed() const 
{ 
	return _speed; 
}

int Polymon::getHp() const 
{ 
	return _hp; 
}

std::vector<Attack> Polymon::getAttacks() const
{
	return _attacks;
}
