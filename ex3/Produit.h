#ifndef PRODUIT_H
#define PRODUIT_H

#include <iostream>
#include <string>

class Produit {
protected:
    std::string nom;
    double prix;

public:
    Produit(const std::string& n, double p);
    virtual void afficherInfos() const;
    virtual ~Produit() = default;
};

class ProduitAlimentaire : public Produit {
private:
    std::string dateExpiration;

public:
    ProduitAlimentaire(const std::string& n, double p, const std::string& dateExp);
    void afficherInfos() const override;
};

class ProduitElectronique : public Produit {
private:
    int garantie; 

public:
    ProduitElectronique(const std::string& n, double p, int g);
    void afficherInfos() const override;
};

#endif
