#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Product.h"
#include "Client.h"
#include "Commande.h"

class Product;
class Client;
class Commande;

class Magasin {
private:
    std::vector<Product> products_;
    std::vector<Client> clients_;
    std::vector<Commande> commande_;

public:
    Magasin();

    const std::vector<Product>& getProducts() const;
    const std::vector<Client>& getClient() const;
    const std::vector<Commande>& getCommande() const;

    void addProduct(const Product& product);

    void afficherProduct() const;

    void afficherProduitParNom(const std::string& nom) const;

    void modifierQuantiterProduit(const std::string& nom, int nouvelleQuantite);

    void ajouterClient(const Client& c);

    void afficherClients() const;

    Client* trouverClientParId(int id);
    Client* trouverClientParNom(std::string nom);

    void ajouterProduitPanier(int idClient, const Product& produit);
    void supprimerProduitPanier(int idClient, const std::string& produit);
    void modifierQuantiterProduitPanier(int idClient, const std::string& nom, int nouvellequantite);

    void validerCommande(int idClient, int idCommande);
    void statusCommande(int idCommande);
};