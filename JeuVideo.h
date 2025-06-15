#ifndef JEU_VIDEO_H
#define JEU_VIDEO_H
#include <iostream>
#include "ErreurArgumentInvalide.h" //Pour avoir l'exception
#include "Produit.h"

class JeuVideo : Produit {
private:
	std::string genre;
	int stock;

public:
	JeuVideo(std::string p_titre, std::string p_genre, double p_prix, int p_stock);

	std::string getGenre() const;
	int getStock() const;

	double calculerPrixTTC() const override;
	void afficherDetailsProduit() const override;
	void setStock(int nouveauStock) override;
};


#endif