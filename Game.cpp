#include "Game.h"
#include "Polymon.h"

Game::Game(Polymon poly, Polymon polyadv): _polymon(poly), _polymonAdverse(polyadv)
{
}

void Game::playRound()
{
	bool play = true;
	while (play) {

		std::cout << "Votre Polymon à une vitesse de : " << _polymon.getSpeed();
		ChooseAttack();


	}

}

void Game::ChooseAttack()
{
	std::cout << "Choissisez parmis ces attaques" << _polymon.getAttacks(); 
}

void Game::HaveDamage(n)
{
	_polymon.setSpeed(n)
}
