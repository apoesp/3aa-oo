#include "Attack.h"

Attack::Attack(std::string name, int points, int damage): _name(name), _points(points), _damage(damage) {}

std::string Attack::getName() const
{
	return _name;
}

int Attack::getPoints() const
{
	return _points;
}

int Attack::getDamage() const
{
	return _damage;
}
