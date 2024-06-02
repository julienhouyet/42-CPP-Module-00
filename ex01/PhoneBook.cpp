/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:45 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 06:59:11 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void PhoneBook::addContact(const Contact& contact) 
{
	contacts[contactCount] = contact;
	contactCount++;
}

void PhoneBook::displayContacts() const 
{
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << "FirstName: " << contacts[i].getFirstName() << std::endl;
		std::cout << "LastName: " << contacts[i].getLastName() << std::endl;
	}
}