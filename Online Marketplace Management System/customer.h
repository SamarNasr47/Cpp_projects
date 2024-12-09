#pragma once
#include<iostream>
#include <string>
#include "cart.h"
#include<vector>
using namespace std;

class customer:public cart
{
	int cid;
	string cname;
	string caddress;
	int cphonenumber;
	string cemail;
	int crate;
	
	


public:
	static vector<customer> list_of_customers;
	customer();
	customer(int, string, string, int, string);
	
	
	void set_cRate(int);
	int get_cRate();
	void set_cid(int);
	int get_cid();

	void set_cname(string);
	string get_cname();
	void set_caddress(string);
	string get_caddress();
	void set_cnumber(int);
	int get_cnumber();
	void set_cemail(string);
	string get_cemail();
	
	customer customers_list(customer c);
	
	
	~customer();
};

