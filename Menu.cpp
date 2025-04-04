#include "Menu.h"

void Menu::afficherMenu() {

    std::vector<Polymon> polymons = Storage::getInstance()->getList(); 
    Polymon polymonAdverse = Storage::getInstance()->pickRandom();

    std::cout << "Choisis ton Polymon :\n\n";

    for (size_t i = 0; i < polymons.size(); i++) {
        std::cout << i + 1 << " " << polymons[i].getName() << std::endl;
    }

    int choix = 0;

    std::cout << "\nEntrez le numéro de votre choix : ";
    std::cin >> choix;    

    std::cout << "\nTu as choisi " << polymons[choix - 1].getName() << "\nTu joues contre " << polymonAdverse.getName() << std::endl;
}
