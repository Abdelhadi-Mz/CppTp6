#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <iostream>

class Personne {
protected:
    std::string nom;
    int age;

public:
    Personne(const std::string& n, int a);
    void afficher() const;
};

class Etudiant : public Personne {
private:
    std::string niveau;

public:
    Etudiant(const std::string& n, int a, const std::string& niv);
    void afficher() const;
};

#endif
