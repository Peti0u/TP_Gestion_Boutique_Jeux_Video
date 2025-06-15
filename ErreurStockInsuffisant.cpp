#include "ErreurStockInsuffisant.h"
#include <string>

ErreurStockInsuffisant::ErreurStockInsuffisant(std::string p_titre_produit, int p_quantite_dispo, int p_quantite_dmd) :
	titre_produit(p_titre_produit), quantite_dispo(p_quantite_dispo), quantite_dmd(p_quantite_dmd) {}

std::string ErreurStockInsuffisant::getTitreProduit() const { return titre_produit; };
int ErreurStockInsuffisant::getQuantiteDispo() const { return quantite_dispo; };
int ErreurStockInsuffisant::getQuantiteDmd() const { return quantite_dmd; };