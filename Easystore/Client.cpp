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

void Client::supprimerDuPanier(const std::string& nom)
{
    for (auto indice = panier_.begin(); indice != panier_.end(); ++indice) {
        if (indice->getTitre() == nom) {
            panier_.erase(indice);
            return;
        }
    }
    std::cout << "Produit '" << nom << "' non trouvé dans le panier." << std::endl;

}

std::ostream& operator<<(std::ostream& os, const Client& client)
{
    os << "Client #" << client.getId()
        << " : " << client.getPrenom()
        << " " << client.getNom() << "\nPanier :\n";
    if (client.panier_.empty()) {
        os << "panier vide";
    }
    else {
        for (const auto& p : client.getPanier()) {
            os << "  - " << p << std::endl;
        }
        return os;
    }
}
