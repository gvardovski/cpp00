/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:19:00 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/10 12:04:29 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "../inc/phonebook.hpp"

int main()
{
	int choice = 0;
	PhoneBook pb;

	std::cout << std::endl;
	std::cout << "<<< WELCOME TO PHONEBOOK! >>>" << std::endl;
	std::cout << std::endl;
	while (1){
		std::cout << "PLEASE ENTER 1,2, OR 3:" << std::endl;
		std::cout << "1: ADD CONTACT" << std::endl;
		std::cout << "2: SEARCH CONTACT" << std::endl;
		std::cout << "3: EXIT" << std::endl;
		std::cin >> choice;
		if (choice == 1){
			pb.add_contact();
		}
		else if (choice == 2){
			pb.search_contact();
		}
		else if (choice == 3)
			std::exit(0);
		else
			continue;
	}
	return (0);
}