#include "Compte.h"

int main() {
    CompteEpargne ce1(101, 1000.0, 0.05); // 5% d'intérêt

    ce1.afficher();

    ce1.deposer(500);
    std::cout << "Apres depet de 500 :" << std::endl;
    ce1.afficher();

    if(ce1.retirer(200))
        std::cout << "Retrait de 200 effectue." << std::endl;
    else
        std::cout << "Retrait impossible." << std::endl;

    ce1.afficher();

    std::cout << "Interet calcule : " << ce1.calculerInteret() << std::endl;

    return 0;
}