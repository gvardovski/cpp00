#include "../inc/contact.hpp"

Contact::Contact() : f_name(""), l_name(""), ph_number("") {}

Contact::Contact(std::string f_name, std::string l_name, std::string ph_number)
	: f_name(f_name), l_name(l_name), ph_number(ph_number) {}

Contact::~Contact() {}

std::string Contact::get_f_name()
{
	return(this->f_name);
}

std::string Contact::get_l_name()
{
	return(this->l_name);
}

std::string Contact::get_ph_number()
{
	return(this->ph_number);
}