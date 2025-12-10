/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:18:57 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/10 13:10:49 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook() : _cc(0) {}

void PhoneBook::init_contact(std::string f_name, std::string l_name, std::string ph_number)
{
	if (_cc == 8)
          _contacts[_cc - 1] = Contact(f_name, l_name, ph_number);
	else
		_contacts[_cc++] = Contact(f_name, l_name, ph_number);
}

void PhoneBook::add_contact()
{
	std::string f_name;
	std::string l_name;
	std::string ph_number;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << std::endl;
	while (1)
	{
		std::cout << "First name: " << std::endl;
		if (!std::getline(std::cin, f_name))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (!f_name.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Last name: " << std::endl;
		if (!std::getline(std::cin, l_name))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (!l_name.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Phone number: " << std::endl;
		if (!std::getline(std::cin, ph_number))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (!ph_number.empty())
			break ;
	}
	std::cout << std::endl;
	init_contact(f_name, l_name, ph_number);
}

void PhoneBook::search_contact()
{
	int	id;

	if (_cc == 0)
	{
		std::cout << std::endl;
		std::cout << "No contacts in phonebook." << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << " | " << std::setw(15) << "First Name" << " | " << std::setw(15) << "Last Name" << std::endl;
	for (int i = 0; i < _cc; i++)
	{
		std::cout << std::setw(10) << i << " | " << std::setw(15) << _contacts[i].get_f_name().substr(0, 15) << " | " << std::setw(15)
                    << _contacts[i].get_l_name().substr(0, 15) << std::endl;
	}
	while (1)
	{
		std::cout << "Enter Index: " << std::endl;
		std::cin >> id;
		if (std::cin.fail() || id >= _cc || id < 0)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << std::endl;
			std::cout << "Invalid Index" << std::endl;
			std::cout << std::endl;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "First name: " << _contacts[id].get_f_name() << std::endl;
			std::cout << "Last name: " << _contacts[id].get_l_name() << std::endl;
			std::cout << "Phone number: " << _contacts[id].get_ph_number() << std::endl;
			std::cout << std::endl;
			break ;
		}
	}
}
PhoneBook::~PhoneBook() {}