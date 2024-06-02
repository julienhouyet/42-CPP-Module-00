/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:45 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 10:13:03 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::addContact() 
{
	Contact contact;
	
	std::string input;

	std::cout << "\n" << std::endl;

	std::cin.ignore();

	do {
		std::cout << "First Name : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setFirstName(input);

	do {
		std::cout << "Last Name : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setLastName(input);

	do {
		std::cout << "Nick Name : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setNickName(input);

	do {
		std::cout << "Phone Number : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setPhoneNumber(input);

	do {
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, input);
	} while (input.empty());
	contact.setDarkestSecret(input);

	insertContact(contact);
    std::cout << "\033[32m\nContact added with success!\033[0m" << std::endl;
}

void PhoneBook::insertContact(const Contact& contact) 
{	
	if (contactCount < 8)
	{
		contacts[contactCount] = contact;
		contactCount++;
	}
	else
	{
		contacts[7] = contact;
	}
}

void PhoneBook::searchContact() const
{
	displayContacts();
}

void PhoneBook::displayContacts() const 
{	
    std::cout 
		<< "\n"
		<< std::setw(10) << "Index" << "|" 
		<< std::setw(10) << "FirstName" << "|" 
		<< std::setw(10) << "LastName" << "|" 
		<< std::setw(10) << "Nickname" << 
	std::endl;
			  
	for (int i = 0; i < contactCount; i++)
	{
		std::cout 
			<< std::setw(10) << i << "|" 
			<< std::setw(10) << formatField(contacts[i].getFirstName()) << "|" 
			<< std::setw(10) << formatField(contacts[i].getLastName()) << "|" 
			<< std::setw(10) << formatField(contacts[i].getNickName()) << 
		std::endl;
	}
}

void PhoneBook::displayContact(int i) const 
{
	Contact contact;

	contact = contacts[i];
    std::cout 
		<< "Index : " << i << "\n" 
		<< "FirstName : " << contact.getLastName() << "\n" 
		<< "LastName : " << contact.getLastName() << "\n" 
		<< "Nickname : " << contact.getNickName() << "\n"
		<< "PhoneNumber : " << contact.getPhoneNumber() << "\n"
		<< "DarkestSecret : " << contact.getDarkestSecret() << "\n" <<
	std::endl;
}