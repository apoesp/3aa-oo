#pragma once
#include "Menu.h"

class Game
{
private:

	Polymon _polymon;
	Polymon _polymonAdverse;

public:
	Game(Polymon poly, Polymon polyadv);
	void playRound();
	void ChooseAttack();
	void HaveDamage();


};

