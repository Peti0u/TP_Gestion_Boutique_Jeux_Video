#ifndef CONSOLE_H
#define CONSOLE_H
#include <iostream>
#include "ErreurArgumentInvalide.h"
#include "Produit.h"

class Console : public Produit {
private:
    int stock;

public:
    Console(std::string p_nomConsole, double p_prix, int p_stock);

    int getStock() const;

    void setStock(int nouveauStock);

    double calculerPrixTTC() const override;
    void afficherDetailsProduit() const override;
};

#endif