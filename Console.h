#ifndef CONSOLE_H
#define CONSOLE_H
#include <iostream>
#include "ErreurArgumentInvalide.h" //Pour avoir l'erreur

class Console {
private:
    std::string nomConsole;
    double prix;
    int stock;

public:
    Console(std::string p_nomConsole, double p_prix, int p_stock);

    std::string getNomConsole() const;
    double getPrix() const;
    int getStock() const;

    void setPrix(double nouveauPrix);
    void setStock(int nouveauStock);

    void afficherInfos() const;
};

#endif