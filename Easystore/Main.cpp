#include <iostream>
#include "Magasin.h"

int main() {
	Magasin easyStore;

	Product ps4("PS4", "Console de jeu de marque Sony", 10, 249.99);
	std::cout << "Quantité PS4 avant: " << ps4.getQuantite() << std::endl;
	ps4.setQuantite(8);
	std::cout << "Quantité PS4 après: " << ps4.getQuantite() << std::endl;

	return 0;
}