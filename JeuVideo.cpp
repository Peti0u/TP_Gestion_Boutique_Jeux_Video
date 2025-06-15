#include "JeuVideo.h"
#include <string> 

JeuVideo::JeuVideo(std::string p_titre, std::string p_genre, double p_prix, int p_stock) :
	titre(p_titre), genre(p_genre) {
	setPrix(p_prix);
	setStock(p_stock); }

std::string JeuVideo::getTitre() const { return titre; }
std::string JeuVideo::getGenre() const { return genre; }
double JeuVideo::getPrix() const { return prix; }
int JeuVideo::getStock() const { return stock; }

void JeuVideo::setPrix(double p_prix) {
	if (p_prix < 0) {
		throw ErreurArgumentInvalide("Le prix ne peut pas etre negatif");
	}
	else {
		prix = p_prix;
	}
}

void JeuVideo::setStock(int p_stock) {
	if (p_stock < 0) {
		throw ErreurArgumentInvalide("Le stock ne peut pas etre negatif");
	}
	else {
		stock = p_stock;
	}
}

void JeuVideo::afficherInfos() const {
	std::cout << "Titre : " << titre << std::endl;
	std::cout << "Genre : " << genre << std::endl;
	std::cout << "Prix  : " << prix << " euros" << std::endl;
	std::cout << "Stock : " << stock << std::endl;
}