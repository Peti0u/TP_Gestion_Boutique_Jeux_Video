#include "GestionProduits.h"

int GestionProduits::totalProduitsVendus = 0;

void GestionProduits::ajouterJeu(const JeuVideo& jeu) {
    jeux.push_back(jeu);
}

void GestionProduits::ajouterConsole(const Console& console) {
    consoles.push_back(console);
}

void GestionProduits::afficherInventaireComplet() const {
    std::cout << "\nVoici l'inventaire des jeux video :" << std::endl;

    for (int i = 0; i < jeux.size(); i++) {
        std::cout << jeux[i] << std::endl;
    }

    for (int i = 0; i < consoles.size(); i++) {
        std::cout << consoles[i] << std::endl;
    }
}


void GestionProduits::vendreJeu(const std::string& titreJeu, int quantite) {
    for (int i = 0; i < jeux.size(); i++) {
        if (jeux[i].getNomProduit() == titreJeu) {
            if (jeux[i].getStock() >= quantite) {
                jeux[i].setStock(jeux[i].getStock() - quantite);
                incrementerTotalVentes(quantite);

                if (jeux[i].getStock() == 0) {
                    jeux.erase(jeux.begin() + i);
                }
            }
            else {
                throw ErreurStockInsuffisant(titreJeu, quantite, jeux[i].getStock());
            }

            return;
        }
    }
    std::cout << "Le jeu " << titreJeu << " n'a pas ete trouve" << std::endl;
}

void GestionProduits::vendreConsole(const std::string& nomConsole, int quantite) {
    for (int i = 0; i < consoles.size(); i++) {
        if (consoles[i].getNomProduit() == nomConsole) {
            if (consoles[i].getStock() >= quantite) {
                consoles[i].setStock(consoles[i].getStock() - quantite);
                incrementerTotalVentes(quantite);

                if (consoles[i].getStock() == 0) {
                    consoles.erase(consoles.begin() + i);
                }
            }
            else {
                throw ErreurStockInsuffisant(nomConsole, quantite, consoles[i].getStock());
            }

            return;
        }
    }
    std::cout << "La console " << nomConsole << " n'a pas ete trouvee" << std::endl;
}

void GestionProduits::incrementerTotalVentes(int quantite) {
    totalProduitsVendus += quantite;
}

int GestionProduits::getTotalProduitsVendus() { return totalProduitsVendus; }