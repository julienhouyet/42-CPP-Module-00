/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:45 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 07:58:47 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::addContact(const Contact& contact) 
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
			<< std::setw(10) << i + 1 << "|" 
			<< std::setw(10) << formatField(contacts[i].getFirstName()) << "|" 
			<< std::setw(10) << formatField(contacts[i].getLastName()) << "|" 
			<< std::setw(10) << formatField(contacts[i].getNickName()) << 
		std::endl;
	}
}