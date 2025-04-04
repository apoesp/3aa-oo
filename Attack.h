#pragma once
#include <iostream>

class Attack
{
private:
	std::string _name;
	int _points = 0; 
	int _damage = 0;

public:

	Attack(std::string name, int points, int damage);
	std::string getName() const;
	int getPoints() const;
	int getDamage() const;
};

