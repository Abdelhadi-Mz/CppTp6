#include "Compte.h"

Compte::Compte(int num, double s) : numero(num), solde(s) {}

void Compte::deposer(double montant) {
    solde += montant;
}

bool Compte::retirer(double montant) {
    if (montant > solde)
        return false;
    solde -= montant;
    return true;
}

void Compte::afficher() const {
    std::cout << "Compte num:" << numero << ", Solde : " << solde << std::endl;
}

CompteEpargne::CompteEpargne(int num, double s, double taux)
    : Compte(num, s), tauxInteret(taux) {}

double CompteEpargne::calculerInteret() const {
    return solde * tauxInteret;
}

void CompteEpargne::afficher() const {
    Compte::afficher();
    std::cout << "Taux d'interet : " << tauxInteret
              << ", Interet : " << calculerInteret() << std::endl;
}
