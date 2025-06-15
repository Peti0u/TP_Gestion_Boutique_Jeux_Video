// TP_Gestion_Boutique_Jeux_Video.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "JeuVideo.h"
#include "Console.h"
#include "GestionProduits.h"

int main()
{
    GestionProduits gestion;

    try {
        JeuVideo FIFA("FIFA", "Sport", 60, 2);
        gestion.ajouterJeu(FIFA);

        Console PS5("PS5", 500, 1);
        gestion.ajouterConsole(PS5);

        gestion.afficherInventaireComplet();

        gestion.vendreJeu("FIFA", 2);
        gestion.vendreConsole("PS5", 1);

        std::cout << "\nTotal produits vendus : " << GestionProduits::getTotalProduitsVendus() << std::endl;

        gestion.afficherInventaireComplet();
    }
    catch (const ErreurArgumentInvalide& e) {
        std::cerr << "Argument invalide : " << e.what() << std::endl;
    }
}