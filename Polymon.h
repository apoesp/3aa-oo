#pragma once
#include <string>
#include "Attack.h"
#include <vector>

class Polymon
{
public:
	Polymon(std::string name, int speed, int hp);
	void addAttack(std::string name, int points, int damage);
	std::string getName() const;
	int getSpeed() const;
	int getHp() const;
	std::vector<Attack> getAttacks() const;


private:

	std::string _name;
	int _speed = 0;
	int _hp = 0;
	std::vector <Attack> _attacks;
};


