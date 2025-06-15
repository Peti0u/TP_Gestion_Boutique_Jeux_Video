#include "Console.h"
#include <iostream>

Console::Console(std::string p_nomConsole, double p_prix, int p_stock) :
    nomConsole(p_nomConsole) {
    setPrix(p_prix);
    setStock(p_stock);}

std::string Console::getNomConsole() const { return nomConsole; }
double Console::getPrix() const { return prix; }
int Console::getStock() const { return stock; }

void Console::setPrix(double nouveauPrix) {
    if (nouveauPrix < 0) {
        throw ErreurArgumentInvalide("Le prix de la console ne peut pas etre negatif");
    }
    else {
        prix = nouveauPrix;
    }
}

void Console::setStock(int nouveauStock) {
    if (nouveauStock < 0) {
        throw ErreurArgumentInvalide("Le stock de la console ne peut pas être negatif");
    }
    else {
        stock = nouveauStock;
    }
}

void Console::afficherInfos() const {
    std::cout << "Console : " << nomConsole << std::endl;
    std::cout << "Prix    : " << prix << " euros" << std::endl;
    std::cout << "Stock   : " << stock << std::endl;
}
