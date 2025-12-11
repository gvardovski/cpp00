/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:18:34 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/11 13:18:34 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string makeupper(std:: string str)
{
	for (size_t c = 0; c < str.length(); c++)
		str[c] = toupper(str[c]);
	return(str);
}

int main(int gc, char **gv)
{
	if (gc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < gc; i++)
			std::cout << makeupper(gv[i]);
	std::cout << std::endl;
	return (0);
}