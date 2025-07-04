#ifndef STOCK_INSUFFISANT_H
#define STOCK_INSUFFISANT_H
#include <iostream>

class ErreurStockInsuffisant : public std::runtime_error {
private:
	std::string titre_produit;
	int quantite_dispo;
	int quantite_dmd;

public:
	ErreurStockInsuffisant(std::string p_titre_produit, int p_quantite_dispo, int p_quantite_dmd);

	std::string getTitreProduit() const;
	int getQuantiteDispo() const;
	int getQuantiteDmd() const;

};


#endif 