#include "commande.h"

Commande::Commande(int id, const Client& client, const std::vector<Product>& commande)
	: id_(id) , client_(client), commande_(commande), livraison_(false)
{
}

int Commande::getId() const
{
	return id_;
}

const Client& Commande::getClient() const 
{
	return client_;
}

const std::vector<Product> Commande::getCommande() const
{
	return commande_;
}

bool Commande::getLivraison() const 
{
	return livraison_;
}

void Commande::setlivraison(bool livraison)
{
	livraison_ = livraison;

}

std::ostream& operator<<(std::ostream& os, const Commande& commande)
{
	os << "=== Commande #" << commande.id_ << "\n"
		<< "Client: " << commande.client_.getNom() << " " << commande.client_.getPrenom()
		<< " ID: " << commande.client_.getId() << "\n"
	    << "Statut: " << (commande.livraison_ ? "livrée" : "non livrée") << "\n"
	    << "Produits commandés (" << commande.commande_.size() << "):\n";
	return os;
}


