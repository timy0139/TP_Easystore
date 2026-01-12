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

void Magasin::afficherProduitParNom(const std::string& nom) const
{
	for (const auto& produit : products_) {
		if (produit.getTitre() == nom) {
			std::cout << produit << std::endl;
			return;
		}
	}
	std::cout << "Produit '" << nom << "' non trouvé." << std::endl;
}

void Magasin::modifierQuantiterProduit(const std::string& nom, int nouvelleQuantite)
{
	for (auto& product : products_) {
		if (product.getTitre() == nom) {
			product.setQuantite(nouvelleQuantite);
			std::cout << "Quantité de '" << nom << "' mise à jour: "
				<< nouvelleQuantite << std::endl;
			return;
		}
	}
	std::cout << "Produit '" << nom << "' non trouvé." << std::endl;
}
