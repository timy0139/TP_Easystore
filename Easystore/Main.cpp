#include <iostream>
#include "Magasin.h"

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
	
	return 0;
}