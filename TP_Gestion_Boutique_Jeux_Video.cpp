// TP_Gestion_Boutique_Jeux_Video.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "JeuVideo.h"
#include "Console.h"

int main()
{
    try {
        //Test des jeux
        JeuVideo FIFA("FIFA", "Sport", 60, 15);
        std::cout << FIFA << std::endl;

        //JeuVideo JediSurvivor("Jedi Survivor", "Aventure", -1, 8);

        //Test des consoles
        Console PS5("PS5", 500, 5);
        std::cout << PS5 << std::endl;

        //Console PS6("PS6", -1, 2);
    }
    catch (const ErreurArgumentInvalide& e) {
        std::cerr << "\n\nErreur : " << e.what() << std::endl;
    }
}