#include "Magasin.h"

Magasin::Magasin()
{
}

const std::vector<Product>& Magasin::getProducts() const
{
	return products_;
}

const std::vector<Client>& Magasin::getClient() const
{
	return clients_;
}

const std::vector<Commande>& Magasin::getCommande() const
{
	return commande_;
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

void Magasin::ajouterClient(const Client& client)
{
	clients_.push_back(client);
}

void Magasin::afficherClients() const
{
	for (const auto& client : clients_) {
		std::cout << client << std::endl;
	}
}

Client* Magasin::trouverClientParId(int id)
{
	for (auto& client : clients_) {
		if (client.getId() == id) {
			std::cout << client << std::endl;
			return &client;
		}
	}
	return nullptr;
}

Client* Magasin::trouverClientParNom(std::string nom)
{
	for (auto& client : clients_) {
		if (client.getNom() == nom) {
			std::cout << client << std::endl;
			return &client;
		}
	}
	return nullptr;
}

void Magasin::ajouterProduitPanier(int idClient, const Product& produit)
{
	Client* client = trouverClientParId(idClient);
	if (client) {
		client->ajouterPanier(produit);
	}
	else {
		std::cout << "Client avec ID " << idClient << " non trouvé." << std::endl;
	}
}

void Magasin::supprimerProduitPanier(int idClient, const std::string& produit)
{
	Client* client = trouverClientParId(idClient);
	if (client) {
		client->supprimerDuPanier(produit);
	}
	else {
		std::cout << "Client avec ID" << idClient << "non trouvé. " << std::endl;
	}
}

void Magasin::modifierQuantiterProduitPanier(int idClient, const std::string& nom, int nouvellequantite)
{
	Client* client = trouverClientParId(idClient);
	if (client) {
		client->modifierQuantitePanier(nom, nouvellequantite);
	}
	else {
		std::cout << "Client avec ID" << idClient << "nom trouvé" << std::endl;
	}
}
