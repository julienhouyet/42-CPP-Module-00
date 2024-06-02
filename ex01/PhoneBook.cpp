/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:45 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 06:40:21 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void PhoneBook::addContact(const Contact& contact) 
{
	contacts = contact;
}

void PhoneBook::displayContacts() const 
{
	std::cout << "FirstName: " << contacts.getFirstName() << std::endl;
	std::cout << "LastName: " << contacts.getLastName() << std::endl;
}