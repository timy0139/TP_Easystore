#include "Magasin.h"

Magasin::Magasin()
{
}

const std::vector<Product>& Magasin::getProducts() const
{
	return products_;
}

void Magasin::addProduct(const Product& product)
{
	products_.push_back(product);
}

void Magasin::afficherProduct() const
{
	for (const auto& produit : products_) {
		std::cout << produit << std::endl;
	}
}
