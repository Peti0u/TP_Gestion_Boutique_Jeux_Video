#include "Console.h"
#include <iostream>

Console::Console(std::string p_nomConsole, double p_prix, int p_stock) :
    Produit(p_nomConsole, p_prix) {
    setStock(p_stock);
}

int Console::getStock() const { return stock; }

void Console::setStock(int nouveauStock) {
    if (nouveauStock < 0) {
        throw ErreurArgumentInvalide("Le stock ne peut pas etre negatif");
    }
    else {
        stock = nouveauStock;
    }
}

double Console::calculerPrixTTC() const {
    return prixBase * 1.20;
}

void Console::afficherDetailsProduit() const {
    std::cout << "Console : " << nomProduit << std::endl;
    std::cout << "Prix    : " << calculerPrixTTC() << " euros" << std::endl;
    std::cout << "Stock   : " << stock << std::endl;
}
