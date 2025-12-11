/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:19:00 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/11 18:53:46 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>

#include "../inc/phonebook.hpp"

int main()
{
	std::string choice;
	PhoneBook pb;

	std::cout << std::endl;
	std::cout << "<<< WELCOME TO PHONEBOOK! >>>" << std::endl;
	std::cout << std::endl;
	while (1){
		std::cout << "PLEASE ENTER 1,2, OR 3:" << std::endl;
		std::cout << "1: ADD CONTACT" << std::endl;
		std::cout << "2: SEARCH CONTACT" << std::endl;
		std::cout << "3: EXIT" << std::endl;
		if (!std::getline(std::cin, choice))
		{
			std::cout << "\n REALLY! CTRL + D:) BYE BYE!.\n";
			std::exit(0);
		}
		if (choice == "1"){
			pb.add_contact();
			continue;
		}
		else if (choice == "2"){
			pb.search_contact();
			continue;
		}
		else if (choice == "3")
			std::exit(0);
		else
		{
			std::cout << std::endl;
			std::cout << "Invalid choice" << std::endl;
			std::cout << std::endl;
			continue;
		}
	}
	return (0);
}