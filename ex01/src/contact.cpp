/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:49:35 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/11 16:10:15 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/contact.hpp"

Contact::Contact() {
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
	: _first_name(first_name), _last_name(last_name), _nickname(nickname), _phone_number(phone_number), _darkest_secret(darkest_secret) {}

std::string Contact::get_first_name() const{
	return this->_first_name;
}

std::string Contact::get_last_name() const{
	return this->_last_name;
}

std::string Contact::get_nickname() const{
	return this->_nickname;
}

std::string Contact::get_phone_number() const{
	return this->_phone_number ;
}

std::string Contact::get_darkest_secret() const{
	return this->_darkest_secret;
}

Contact::~Contact() {}