/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:53:32 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/08 14:49:39 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <iomanip>
# include "contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int _cc;

		void init_contact(std::string f_name, std::string l_name, std::string ph_number);
		std::string trunc_col(std::string data);

	public:
		PhoneBook(void);
		~PhoneBook();
		void add_contact(void);
		void search_contact(void);
		
};

#endif