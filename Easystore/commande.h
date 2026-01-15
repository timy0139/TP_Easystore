#pragma once
#include"Client.h"

class Commande {
private:
	int id_;
	Client client_;
	std::vector<Product> commande_;
	bool livraison_;
public:
	Commande(int  id, const Client& client, const std::vector<Product>& commande, bool livraison);

	int getId() const;
	const Client& getClient() const;
	const std::vector<Product> getCommande() const;
	bool getLivraison() const ;

	friend std::ostream& operator<<(std::ostream& os, const Commande& commande);
};































//    static int _nextId;


//    int getId() const { return _id; }
//
//    // Setter pour le statut
//    void setDeliveryStatus(bool delivered) { _isDelivered = delivered; }
//