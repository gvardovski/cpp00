/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:18:57 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/11 18:50:46 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

PhoneBook::PhoneBook() : _cc(0) {}

void PhoneBook::init_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	if (_cc == 8)
          _contacts[_cc - 1] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	else
		_contacts[_cc++] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
}

void PhoneBook::add_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (1)
	{
		std::cout << "First name: " << std::endl;
		if (!std::getline(std::cin, first_name))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (!first_name.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Last name: " << std::endl;
		if (!std::getline(std::cin, last_name))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (!last_name.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Nickname: " << std::endl;
		if (!std::getline(std::cin, nickname))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (!nickname.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Phone number: " << std::endl;
		if (!std::getline(std::cin, phone_number))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (!phone_number.empty())
			break ;
	}
	while (1)
	{
		std::cout << "Darkest secret: " << std::endl;
		if (!std::getline(std::cin, darkest_secret))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (!darkest_secret.empty())
			break ;
	}
	std::cout << std::endl;
	init_contact(first_name, last_name, nickname, phone_number, darkest_secret);
}

std::string PhoneBook::trunc_col(std::string data)
{
	if (data.length() > 10)
	{
		data = data.substr(0, 9);
		data += ".";
	}
	return (data);
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
	std::cout << std::setw(10) << "Index" << " | "
			  << std::setw(10) << "First Name" << " | " 
			  << std::setw(10) << "Last Name" << " | " 
			  << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < _cc; i++)
	{
		std::cout << std::setw(10) << i << " | "
			  	  << std::setw(10) << PhoneBook::trunc_col(_contacts[i].get_first_name()) << " | "
				  << std::setw(10) << PhoneBook::trunc_col(_contacts[i].get_last_name()) << " | "
				  << std::setw(10) << PhoneBook::trunc_col(_contacts[i].get_nickname()) << std::endl;
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
			continue ;
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << std::endl;
			std::cout << "First name: " << _contacts[id].get_first_name() << std::endl;
			std::cout << "Last name: " << _contacts[id].get_last_name() << std::endl;
			std::cout << "Nickname: " << _contacts[id].get_nickname() <<  std::endl;
			std::cout << "Phone number: " << _contacts[id].get_phone_number() << std::endl;
			std::cout << "Darkest secret: " << _contacts[id].get_darkest_secret() << std::endl;
			std::cout << std::endl;
			break ;
		}
	}
}
PhoneBook::~PhoneBook() {}