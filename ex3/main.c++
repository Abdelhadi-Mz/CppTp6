#include "Produit.h"
#include <vector>

int main() {
    ProduitAlimentaire pa1("Lait", 1.5, "2025-03-31");
    ProduitElectronique pe1("Smartphone", 499.99, 24);

    std::vector<Produit*> produits;
    produits.push_back(&pa1);
    produits.push_back(&pe1);

    for (const auto& p : produits) {
        p->afficherInfos();
    }

    return 0;
}
