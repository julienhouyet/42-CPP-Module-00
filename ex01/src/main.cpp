/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:16:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/04 15:10:18 by jhouyet          ###   ########.fr       */
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
		<< "\033[33m--- Please choose a command ---" << "\n"
		<< " " << "\n"
		<< "ADD : Add a contact" << "\n"
		<< "SEARCH : Search a contact" << "\n"
		<< "EXIT : Exit the PhoneBook" <<  "\n" 
		<< " " << "\n"
		<< "-------------------------------\033[0m"
		<< "\n" <<
	std::endl;

	while (true)
	{
	
		std::cout << "Command : ";
		
		if (std::getline(std::cin, command).fail() == 1)
		{
			std::cout << " " << std::endl;
			break;
		}
		else
		{
			if (command == "ADD")
			{
				phonebook.addContact();
			}
			else if (command == "SEARCH")
			{
				phonebook.searchContact();
			}
			else if (command == "EXIT")
			{
				break;
			}
			else
			{
				std::cout << "\nUnknow command\n" << std::endl;
			}
		}
	}

	return (0);
}