/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:16:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 08:42:33 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;

	std::string command;

	std::cout 
		<< " " << "\n"
		<< "--- Please choose a command ---" << "\n"
		<< " " << "\n"
		<< "ADD : Add a contact" << "\n"
		<< "SEARCH : Search a contact" << "\n"
		<< "EXIT : Exit the PhoneBook" <<  "\n" 
		<< " " << "\n"
		<< "-------------------------------"
		<< "\n" <<
	std::endl;

	while (true)
	{
		std::cout << "Command : ";
		std::cin >> command;

		if (command == "ADD")
		{
			std::cout << "Adding...\n" << std::endl;
		}
		else if (command == "SEARCH")
		{
			std::cout << "Searching...\n" << std::endl;
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Unknow command\n" << std::endl;
		}
	}

	return (0);
}