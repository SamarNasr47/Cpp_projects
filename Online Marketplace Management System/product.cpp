#include "product.h"
#include<vector>



product::product()
{
	product_id = NULL;
	product_name = "NULL";
	price = NULL;
	category = "NULL";
	Quantity_of_product = NULL;
}
product::product(int pid, string pn, float p, string c,int qp) {
	product_id = pid;
	product_name = pn;
	price = p;
	category = c;
	Quantity_of_product = qp;
}
/*f called calc quantity*/

void product::set_Quantity(int q)
{
	Quantity_of_product = q;
	

}
void product::set_id(int id) {
	product_id = id;
	
}

void product::set_product_name(string name) {
	product_name = name;
	
}

void product::set_price(float xprice) {
	price = xprice;
	
}

void product::set_category(string xcategory) {
	category = xcategory;
	
}

int product::get_id() {
	return product_id;
}

string product::get_category() {
	return category;
}

string product::get_product_name() {
	return product_name;
}

float product::get_price() {
	return price;
}
int product::get_Quantity()
{
	return Quantity_of_product;
}




product::~product()
{
}
