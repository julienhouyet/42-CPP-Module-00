/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:16:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 06:54:26 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;

	Contact contact1;
	
	contact1.setFirstName("Julien");
	contact1.setLastName("Houyet");

	Contact contact2;
	
	contact2.setFirstName("Maxime");
	contact2.setLastName("Pierre");

	phonebook.addContact(contact2);
	
	phonebook.displayContacts();

	return 0;
}