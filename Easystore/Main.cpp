#include <iostream>
#include "Magasin.h"
#include "client.h"

int main() {
	Magasin easyStore;

	Product ps4("PS4", "Console de jeu de marque Sony", 10, 249.99);
	Product xbox("Xbox", "Console de jeu de Microsoft", 6, 449.99);
	std::cout << ps4 << std::endl;
	std::cout << "Quantité PS4 avant: " << ps4.getQuantite() << std::endl;
	ps4.setQuantite(8);
	std::cout << "Quantité PS4 après: " << ps4.getQuantite() << std::endl;

	//question 3
	easyStore.addProduct(ps4);
	easyStore.addProduct(xbox);
	std::cout << "2 produits ajoutés au magasin." << std::endl;
	std::cout << "Nombre de produits: " << easyStore.getProducts().size() << std::endl;
	easyStore.afficherProduct();

	easyStore.afficherProduitParNom("Xbox");
	easyStore.afficherProduitParNom("PlayStation 5");

	easyStore.modifierQuantiterProduit("Xbox", 20);
	easyStore.afficherProduitParNom("PS4");
	easyStore.modifierQuantiterProduit("Nintendo", 5);

	//question 4
	Client client1(1, "Dominique", "Ginhac");
	Client client2(2, "Thomas", "Millet");
	client1.ajouterPanier(ps4);
	client2.ajouterPanier(xbox);

	client1.viderPanier();
	return 0;
}