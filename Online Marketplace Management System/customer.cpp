#include "customer.h"



customer::customer()
{
	cid = NULL;
	cname = "NULL";
	caddress = "NULL";
	cphonenumber = NULL;
	cemail = "NULL";
	

}
customer::customer(int id, string name, string address, int number, string email) {
	cid = id;
	cname = name;
	caddress = address;
	cphonenumber = number;
	cemail = email;
}
void customer::set_cRate(int r)
{
	crate = r;
	
}
int customer::get_cRate()
{

	return crate;
}

int customer::get_cid()
{
	return cid;
}
void customer::set_cid(int x) 
{
	cid = x;
}
string customer::get_cname() {
	return cname;
}
void customer::set_cname(string x) 
{
	cname = x;
}
string customer::get_caddress() 
{
	return caddress;
}
void customer::set_caddress(string x) 
{
	caddress = x;
}
int customer::get_cnumber()
{
	return cphonenumber;
}
void customer::set_cnumber(int x) 
{
	cphonenumber = x;
}
string customer::get_cemail() 
{
	return cemail;
}
void customer::set_cemail(string x) 
{
	cemail = x;
}


customer::~customer()
{
}
