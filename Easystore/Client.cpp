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
