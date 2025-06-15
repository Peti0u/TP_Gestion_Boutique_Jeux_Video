#include "Produit.h"

Produit::Produit(std::string p_nomProduit, double p_prixBase) :
	nomProduit(p_nomProduit) {
	setPrixBase(p_prixBase);
}

std::string Produit::getNomProduit() const { return nomProduit; }

double Produit::getPrixBase() const { return prixBase; }

void Produit::setPrixBase(double p_prixBase) {
	if (p_prixBase < 0) {
		throw ErreurArgumentInvalide("Le prix ne peut pas etre negatif");
	}
	else {
		prixBase = p_prixBase;
	}
}

Produit::~Produit() {}
