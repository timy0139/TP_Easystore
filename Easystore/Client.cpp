#include "Client.h"

Client::Client(int id, std::string prenom, std::string nom)
    : id_(id), prenom_(prenom), nom_(nom)
{
}

int Client::getId() const
{
    return id_;
}

std::string Client::getNom() const
{
    return nom_;
}

std::string Client::getPrenom() const
{
    return prenom_;
}

const std::vector<Product>& Client::getPanier() const
{
    return panier_;
}

void Client::ajouterPanier(const Product& produit)
{
    panier_.push_back(produit);
}

void Client::viderPanier()
{
    panier_.clear();
}

void Client::modifierQuantitePanier(const std::string& nom, int nouvelleQuantite)
{
    for (auto& p : panier_) {
        if (p.getTitre() == nom) {
            p.setQuantite(nouvelleQuantite);
            return;
        }
    }
    std::cout << "Produit '" << nom << "' non trouvé dans le panier." << std::endl;

}
