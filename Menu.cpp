#include "Menu.h"

void Menu::afficherMenu() {

    std::vector<Polymon> polymons = Storage::getInstance()->getList();

    std::cout << "Choisis ton Polymon :\n";

    for (size_t i = 0; i < polymons.size(); i++) {
        std::cout << i + 1 << polymons[i].getName() << std::endl;
    }

    int choix = 0;

    std::cout << "Entrez le numéro de votre choix : ";
    std::cin >> choix;    

    std::cout << "Tu as choisi " << polymons[choix - 1].getName() << std::endl;
}
