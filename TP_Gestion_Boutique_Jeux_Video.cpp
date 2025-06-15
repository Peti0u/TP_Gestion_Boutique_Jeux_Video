// TP_Gestion_Boutique_Jeux_Video.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "JeuVideo.h"

int main()
{
    try {
        JeuVideo FIFA("FIFA", "Sport", 60, 15);
        FIFA.afficherInfos();
        JeuVideo JediSurvivor("Jedi Survivor", "Aventure", -1, 8);
        JediSurvivor.afficherInfos();
    }
    catch (const ErreurArgumentInvalide& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }
}