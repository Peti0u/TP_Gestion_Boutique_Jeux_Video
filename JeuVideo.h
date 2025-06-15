#ifndef JEU_VIDEO_H
#define JEU_VIDEO_H
#include <iostream>
#include "ErreurArgumentInvalide.h" //Pour avoir l'exception

class JeuVideo {
private:
	std::string titre;
	std::string genre;
	double prix;
	int stock;

public:
	JeuVideo(std::string p_tire, std::string p_genre, double p_prix, int p_stock);

	std::string getTitre() const;
	std::string getGenre() const;
	double getPrix() const;
	int getStock() const;

	void setPrix(double p_prix);
	void setStock(int p_stock);

	void afficherInfos() const;
};


#endif