#ifndef GESTION_PRODUITS_H
#define GESTION_PRODUITS_H

#include <vector>
#include <iostream>
#include "JeuVideo.h"
#include "Console.H"
#include "ErreurStockInsuffisant.h"


class GestionProduits {
private:
    std::vector<JeuVideo> jeux;
    std::vector<Console> consoles;

    static int totalProduitsVendus;

public:
    static void incrementerTotalVentes(int quantite);

    void ajouterJeu(const JeuVideo& jeu);
    void ajouterConsole(const Console& console);

    void afficherInventaireComplet() const;

    void vendreJeu(const std::string& titreJeu, int quantite);
    void vendreConsole(const std::string& nomConsole, int quantite);
   
    static int getTotalProduitsVendus();
};

#endif