#include "seller.h"
#include <vector>



seller::seller()
{
	product();
	seller_name = "NULL";
	seller_id = NULL;
	seller_email = "NULL";
}

seller::seller(int id, string name, string email) {
	product();
	seller_name = name;
	seller_email = email;
	seller_id = id;
}

void seller::set_sid(int x) 
{
	seller_id = x;
}

int seller::get_sid() 
{
	return seller_id;
}

void seller::set_semail(string x) 
{
	seller_email = x;
}

string seller::get_semail() 
{
	return seller_email;
}

void seller::set_sname(string x) 
{
	seller_name = x;
}

string seller::get_sname() 
{
	return seller_name;
}



seller::~seller()
{
}
