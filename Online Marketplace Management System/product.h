#pragma once
#include <iostream> 
#include <string>
#include <vector>

using namespace std;
class product
{
	int product_id;
	string product_name;
	float price;
	string category;
	int Quantity_of_product;
	 
	
	

public:
	
	product();
	product(int pid, string pn, float p, string c,int qp);
	void set_id(int id);
	void set_product_name(string name);
	void set_price(float price);
	void set_category(string category);
	void set_Quantity(int Quantity);
	int get_id();
	string get_product_name();
	float get_price();
	string get_category();
	int get_Quantity();
	
	
	~product();
};

