#include "ErreurStockInsuffisant.h"
#include <string>
ErreurStockInsuffisant::ErreurStockInsuffisant(std::string p_titre_produit, int p_quantite_dmd, int p_quantite_dispo) :
    std::runtime_error("Stock insuffisant pour le produit \"" + p_titre_produit +
        "\", vous en demandez " + std::to_string(p_quantite_dmd) +
        ", mais seulement " + std::to_string(p_quantite_dispo) + " sont disponibles"),
    titre_produit(p_titre_produit),
    quantite_dmd(p_quantite_dmd),
    quantite_dispo(p_quantite_dispo) {
}

std::string ErreurStockInsuffisant::getTitreProduit() const { return titre_produit; };
int ErreurStockInsuffisant::getQuantiteDispo() const { return quantite_dispo; };
int ErreurStockInsuffisant::getQuantiteDmd() const { return quantite_dmd; };