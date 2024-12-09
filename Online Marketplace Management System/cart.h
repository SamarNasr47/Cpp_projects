#pragma once
#include "product.h"
#include <vector>
 class cart:product
{

public:
	vector<product> *cart_products=new vector<product>();
	cart();
	product add_to_cart(product x);
	~cart();
};

