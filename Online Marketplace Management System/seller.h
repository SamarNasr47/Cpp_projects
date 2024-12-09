#pragma once
#include<iostream>
#include<string>
#include "product.h"
#include <vector>
using namespace std;
class seller : product
{
	int seller_id;
	string seller_name;
	string seller_email;
	
	
public:
	
	seller();
	seller(int x, string y, string z);
	
	int get_sid();
	string get_sname();
	string get_semail();
	void set_sid(int);
	void set_sname(string);
	void set_semail(string);
	
	
	~seller();
};

