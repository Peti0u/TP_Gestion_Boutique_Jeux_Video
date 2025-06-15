#ifndef PRODUIT_H
#define PRODUIT_H
#include <iostream>
#include "ErreurArgumentInvalide.h"
#include <ostream>

class Produit {
protected:
    std::string nomProduit;
    double prixBase;

    Produit(std::string p_nomProduit, double p_prixBase);

public:
    std::string getNomProduit() const;
    double getPrixBase() const;

    void setPrixBase(double p_prixBase);

    virtual double calculerPrixTTC() const = 0;
    virtual void afficherDetailsProduit() const = 0;
    virtual void setStock(int nouveauStock) = 0;

    virtual ~Produit();
    friend std::ostream& operator <<(std::ostream& os, const Produit& produit);


};


#endif