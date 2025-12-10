/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 14:19:11 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/08 14:19:13 by svolkau          ###   ########.fr       */
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
		std::string _f_name;
		std::string _l_name;
		std::string _ph_number;

	public:
		Contact(void);
		Contact(std::string f_name, std::string l_name, std::string ph_number);
		~Contact();

		std::string get_f_name(void) const;
		std::string get_l_name(void) const;
		std::string get_ph_number(void) const;
};

#endif