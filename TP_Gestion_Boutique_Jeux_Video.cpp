// TP_Gestion_Boutique_Jeux_Video.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "JeuVideo.h"
#include "Console.h"
#include "GestionProduits.h"
#include "ErreurArgumentInvalide.h"
#include "ErreurStockInsuffisant.h"

int main()
{
    GestionProduits gestion;

    //Creation des objets
    std::cout << "Creation d'un jeu et d'une console :\n" << std::endl;
    JeuVideo FIFA("FIFA", "Sport", 60, 2);
    gestion.ajouterJeu(FIFA);
    std::cout << FIFA << std::endl;

    JeuVideo JediSurvivor("Jedi Survivor", "Aventure", 80, 3);
    gestion.ajouterJeu(JediSurvivor);
    std::cout << JediSurvivor << std::endl;

    Console PS5("PS5", 500, 1);
    gestion.ajouterConsole(PS5);
    std::cout << PS5 << std::endl;
    Console XboxOne("Xbox One", 450, 7);
    gestion.ajouterConsole(XboxOne);
    std::cout << XboxOne << std::endl;

    gestion.afficherInventaireComplet();

    std::cout << "\n\nNous vendons deux FIFA et la PS5 qui se supprimeront de l'inventaire car nous prenons tout le stock" << std::endl;
    gestion.vendreJeu("FIFA", 2);
    gestion.vendreConsole("PS5", 1);

    std::cout << "\nTotal produits vendus : " << GestionProduits::getTotalProduitsVendus() << std::endl;

    gestion.afficherInventaireComplet();

    //Tests des exceptions
    std::cout << "\nTest des exceptions :" << std::endl;
    try {
        JeuVideo RL("Rocket League", "Sport", -50, 3);
    }
    catch (const ErreurArgumentInvalide& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    try {
        Console PS6("PS6", 50, -1);
    }
    catch (const ErreurArgumentInvalide& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    //Tests des mutateurs
    std::cout << "\nTest des mutateurs :" << std::endl;
    try {
        JeuVideo Fortnite("Fortnite", "Battle Royal", 50, 3);
        Fortnite.setPrixBase(-10);
    }
    catch (const ErreurArgumentInvalide& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    try {
        Console Switch("Switch", 50, 1);
        Switch.setStock(-3);
    }
    catch (const ErreurArgumentInvalide& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    //Test des ventes avec quantites superieures
    std::cout << "\nTest des ventes avec des quantites supp" << std::endl;
    try {
        gestion.vendreJeu("Jeu", 1); //Existe pas
        gestion.vendreJeu("Jedi Survivor", 80);
    }
    catch (const ErreurStockInsuffisant& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }
    try {
        gestion.vendreConsole("Xbox One", 15);
    }
    catch (const ErreurStockInsuffisant& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }
}