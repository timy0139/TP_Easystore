#pragma once

#include <iostream>
#include <vector>
#include <string>

class Product {
private:
    std::string titre_;
    std::string description_;
    int quantite_;
    double prix_;

public:
    Product(std::string titre, std::string description, int quantite, double prix);

    // getters
    std::string getTitre() const;
    std::string getDescription() const; 
    int getQuantite() const;
    double getPrix() const;

    void setQuantite(int quantity);

    friend std::ostream& operator<<(std::ostream& os, const Product& p);
};