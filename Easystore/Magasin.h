#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Product.h"
#include "Client.h"

class Product;
class Client;
class Commande;

class Magasin {
private:
    std::vector<Product> products_;
    std::vector<Client> clients_;
    //std::vector<Commande> orders_;

public:
    Magasin();

    const std::vector<Product>& getProducts() const;
    const std::vector<Client>& getClient() const;

    void addProduct(const Product& product);

    void afficherProduct() const;

    void afficherProduitParNom(const std::string& nom) const;

    void modifierQuantiterProduit(const std::string& nom, int nouvelleQuantite);

    void ajouterClient(const Client& c);

    void afficherClients() const;

    void afficherClientParNom(const std::string nom) const;
    void afficherClientParId(int id) const;
};