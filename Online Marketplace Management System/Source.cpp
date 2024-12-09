#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "product.h"
#include "seller.h"
#include<algorithm>
#include <map>
#include "cart.h"
#include"customer.h"
#include<assert.h>


vector<customer> customer::list_of_customers;
vector<pair <seller, vector<product>>> seller_and_his_products;

// product name and its price and quantity
map<string, pair<float, int>> receipt;

void main() {

	

	bool key1 = 1;
	bool key2;
	bool key3;
	string name;
	int id;

	int seller_id;
	int product_id;

	float price;
	int quantity;
	//int rate;

	

	while (key1 == 1)
	{
		cout << "Do you want to sell or buy ?" << endl;
		cout << "Press 0 to sell" << endl << "press 1 to buy" << endl;
		cout << endl;

		cin >> key2;
		assert(key2 == 0 || key2 == 1);
		switch (key2) {
			//Case he wanna sell so he's a seller
		case 0: {
			cout << endl;
			cout << "You are now in "" SELLER MODE "" Enter your information ^^ " << endl;
			cout << endl;
			cout << endl;

			seller *sel1=new seller();
			//
			cout << "Enter seller name" << endl;
			cin >> name;
			sel1->set_sname(name);
			cout << "Enter seller id" << endl;
			cin >> id;
			sel1->set_sid(id);
			cout << "Enter seller email" << endl;
			cin >> name;
			sel1->set_semail(name);


			bool key3;
			cout << "Do you want to add a product ?" << endl << "1 for yes, 0 for no" << endl;
			cin >> key3;
			assert(key3 == 1 || key3 == 0);

			vector<product> *produts_s=new vector<product>();

			while (key3 == 1) 
			{
				product* p = new product();
				cout << "Enter product name" << endl;
				cin >> name;
				p->set_product_name(name);
				cout << "Enter product id" << endl;
				cin >> id;
				p->set_id(id);
				cout << "Enter product price" << endl;
				cin >> price;
				p->set_price(price);
				cout << "Enter product category" << endl;
				cin >> name;
				transform(name.begin(), name.end(), name.begin(), tolower);
				p->set_category(name);
				cout << "Enter the quantity of product that you have" << endl;
				cin >> quantity;

				p->set_Quantity(quantity);

				
				produts_s->push_back(*p);
				cout << "If you want to exit seller mode press 0, if you want to continue press 1" << endl;
				cin >> key3;
			}
			
			seller_and_his_products.push_back({ *sel1, *produts_s });
				
			//case that the user press 0
			cout << "you exit from seller mode" << endl;
			break;
		}
			  //case he's a customer and wanna buy
		case 1: {
			cout << endl;
			customer* cus = new customer();

			cout << "You are now in "" CUSTOMER MODE "" Enter your information ^^ " << endl;
			cout << endl;
			cout << endl;

			cout << "Enter customer name" << endl;
			cin >> name;
			cus->set_cname(name);
			cout << "Enter customer id" << endl;
			cin >> id;
			cus->set_cid(id);
			cout << "Enter customer address" << endl;
			cin >> name;
			cus->set_caddress(name);
			cout << "Enter customer phone number" << endl;
			cin >> id;
			cus->set_cnumber(id);
			cout << "Enter customer e-mail" << endl;
			cin >> name;
			cus->set_cemail(name);
			customer::list_of_customers.push_back(*cus);
			
			

			cout << "choose a category by writing its name percisely" << endl;
			
			cin >> name;
			transform(name.begin(), name.end(), name.begin(), tolower);

			for (auto i : seller_and_his_products)
			{
				seller s = i.first;
				vector<product> products = i.second;

				cout <<"SELLER ID is" << s.get_sid();
				for (int k = 0; k < products.size(); k++)
				{
					if (products[k].get_category() == name)
						cout << "id: " << products[k].get_id() << "          name: " << products[k].get_product_name() << endl;
				}

			}

			cout << "Choose products you want to add to your cart by writing its id" << endl;
			key3 = 1;
			while (key3 == 1) {
				cout << endl;
				cout << "Enter the id of SELLER that you want to visit his products:" << endl;
				cin >> seller_id;

				cout << "Enter the id the product that you want to add to your cart:" << endl;
				cin >> product_id;


				


				cout << "choose the quantity that you want to buy :" <<  endl;
				

				for (auto i : seller_and_his_products)
				{

					seller s = i.first;
					if (s.get_sid() == seller_id)
					{
						vector<product> products = i.second;


						for (int k = 0; k < products.size(); k++)
						{
							if (products[k].get_id() == product_id)
							{
								cout << "choose the quantity that you want to buy from :"<< products[k].get_product_name() << endl;

								cin >> quantity;

								if(products[k].get_Quantity() >= quantity)
								{ 
									receipt[products[k].get_product_name()] = make_pair(products[k].get_price(), quantity);
									//update the quantity for the product
									products[k].set_Quantity((products[k].get_Quantity() - quantity));
								}
								else
								{
									cout << "Enter a sutable quantity less than or equal  =" << products[k].get_Quantity() << endl;
								}

							}

						}

					}

				}

				//if quantity< total

				cout << "if you want to add another product press 1 else press 0" << endl;
				cin >> key3;

			}
			cout << endl << endl << endl << "               Receipt" << endl;
			cout << endl;
			cout << endl;
			float total = 0;


			for (auto v : receipt)
			{

				string product_name = v.first;
				float price = v.second.first;
				int quantity = v.second.second;
				cout << "product name is : " << product_name << endl;
				cout << endl;
				cout << "product price =  " << price << endl;
				cout << endl;
				cout << "product quantity = " << quantity << endl;
				total += price*quantity;
				cout << endl;
			}

			cout << "Total price = " << total << endl;
		}

		}
		cout << "if you want to exit from the program press 0 if you wanna continue in program press 1" << endl;
		cin >> key1;
	}


	system("pause");
}