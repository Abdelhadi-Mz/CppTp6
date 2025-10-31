#include "Produit.h"

Produit::Produit(const std::string& n, double p) : nom(n), prix(p) {}

void Produit::afficherInfos() const {
    std::cout << "Produit : " << nom << ", Prix : " << prix << std::endl;
}

ProduitAlimentaire::ProduitAlimentaire(const std::string& n, double p, const std::string& dateExp)
    : Produit(n, p), dateExpiration(dateExp) {}

void ProduitAlimentaire::afficherInfos() const {
    Produit::afficherInfos();
    std::cout << "Date d'expiration : " << dateExpiration << std::endl;
}

ProduitElectronique::ProduitElectronique(const std::string& n, double p, int g)
    : Produit(n, p), garantie(g) {}

void ProduitElectronique::afficherInfos() const {
    Produit::afficherInfos();
    std::cout << "Garantie : " << garantie << " mois" << std::endl;
}
