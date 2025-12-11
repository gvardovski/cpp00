/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:19:11 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/11 16:14:47 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <cstdlib>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		~Contact();

		std::string get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_phone_number(void) const;
		std::string get_nickname(void) const;
		std::string get_darkest_secret(void) const;
};

#endif