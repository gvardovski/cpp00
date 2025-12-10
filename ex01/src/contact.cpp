/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:49:35 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/08 13:53:09 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/contact.hpp"

Contact::Contact() {
	this->_f_name = "";
	this->_l_name = "";
	this->_ph_number = "";
}

Contact::Contact(std::string f_name, std::string l_name, std::string ph_number)
	: _f_name(f_name), _l_name(l_name), _ph_number(ph_number) {}

std::string Contact::get_f_name() const{
	return this->_f_name;
}

std::string Contact::get_l_name() const{
	return this->_l_name;
}

std::string Contact::get_ph_number() const{
	return this->_ph_number ;
}

Contact::~Contact() {}