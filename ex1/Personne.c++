#include "Personne.h"

Personne::Personne(const std::string& n, int a) : nom(n), age(a) {}

void Personne::afficher() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Age : " << age << std::endl;
}

Etudiant::Etudiant(const std::string& n, int a, const std::string& niv)
    : Personne(n, a), niveau(niv) {}

void Etudiant::afficher() const {
    Personne::afficher();
    std::cout << "Niveau : " << niveau << std::endl;
}
