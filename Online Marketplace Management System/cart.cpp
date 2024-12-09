#include "cart.h"



cart::cart()
{ 
}

product cart::add_to_cart(product x) 
{
	cart_products->push_back(x);
	return x;
}


cart::~cart()
{
}
