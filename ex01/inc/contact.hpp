
#ifndef CONTACT_H
# define CONTACT_H

#include<iostream>
#include<string>
#include<cstdlib>

struct Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string ph_number;

	public:
		Contact(void);
		Contact(std::string f_name, std::string l_name, std::string ph_number);
		~Contact();

		std::string get_f_name(void);
		std::string get_l_name(void);
		std::string get_ph_number(void);
};

#endif