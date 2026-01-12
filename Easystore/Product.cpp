#include "Product.h"

Product::Product(std::string titre, std::string description, int quantite, double prix)
    : titre_(titre), description_(description), quantite_(quantite), prix_(prix)
{
}

std::string Product::getTitre() const
{
    return titre_;
}

std::string Product::getDescription() const
{
    return description_;
}

int Product::getQuantite() const
{
    return quantite_;
}

double Product::getPrix() const
{
    return prix_;
}

void Product::setQuantite(int quantity)
{
    quantite_ = quantity;
}

std::ostream& operator<<(std::ostream& os, const Product& p)
{
    os << "Produit : " << p.getTitre()
        << " | Description : " << p.getDescription()
        << " | Quantité : " << p.getQuantite()
        << " | Prix : " << p.getPrix() << " €";
    return os;
}
