/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:45 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 09:34:35 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::addContact() 
{
	std::cout << "ADD CONTACT" << std::endl;
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