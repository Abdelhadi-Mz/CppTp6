#ifndef COMPTE_H
#define COMPTE_H

#include <iostream>

class Compte {
protected:
    int numero;
    double solde;

public:
    Compte(int num, double s);
    void deposer(double montant);
    bool retirer(double montant);
    void afficher() const;
};

class CompteEpargne : public Compte {
private:
    double tauxInteret;

public:
    CompteEpargne(int num, double s, double taux);
    double calculerInteret() const;
    void afficher() const;
};

#endif
