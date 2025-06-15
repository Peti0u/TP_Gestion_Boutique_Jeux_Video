#include "JeuVideo.h"
#include <string> 

JeuVideo::JeuVideo(std::string p_titre, std::string p_genre, double p_prix, int p_stock) :
	Produit(p_titre, p_prix), genre(p_genre) {
	setStock(p_stock);
}
	

std::string JeuVideo::getGenre() const { return genre; }
int JeuVideo::getStock() const { return stock; }

void JeuVideo::setStock(int p_stock) {
	if (p_stock < 0) {
		throw ErreurArgumentInvalide("Le stock ne peut pas etre negatif");
	}
	else {
		stock = p_stock;
	}
}

double JeuVideo::calculerPrixTTC() const {
	return prixBase * 1.2;
}

void JeuVideo::afficherDetailsProduit() const {
	std::cout << "Jeu : " << nomProduit << std::endl;
	std::cout << "Genre : " << genre << std::endl;
	std::cout << "Prix  : " << calculerPrixTTC() << " euros" << std::endl;
	std::cout << "Stock : " << stock << std::endl;
}