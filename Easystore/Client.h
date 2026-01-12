#pragma once
#include "Product.h"

class Client {
private:
    int id_;
    std::string prenom_;
    std::string nom_;
    std::vector<Product> panier_;

public:
    Client(int id, std::string prenom, std::string nom);

    int getId() const;
    std::string getNom() const;
    std::string getPrenom() const;
    const std::vector<Product>& getPanier() const;

};