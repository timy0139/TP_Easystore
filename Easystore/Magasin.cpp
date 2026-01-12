#include "Magasin.h"

Magasin::Magasin()
{
}

const std::vector<Product>& Magasin::getProducts() const
{
	return products_;
}
