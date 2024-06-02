/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:16:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 07:10:53 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;

	Contact contact1;
	
	contact1.setFirstName("Aa");
	contact1.setLastName("Aa");

	Contact contact2;
	
	contact2.setFirstName("Bb");
	contact2.setLastName("Bb");

	Contact contact3;
	
	contact3.setFirstName("Cc");
	contact3.setLastName("Cc");

	Contact contact4;
	
	contact4.setFirstName("Dd");
	contact4.setLastName("Dd");

	Contact contact5;
	
	contact5.setFirstName("Ee");
	contact5.setLastName("Ee");

	Contact contact6;
	
	contact6.setFirstName("Ff");
	contact6.setLastName("Ff");

	Contact contact7;
	
	contact7.setFirstName("Gg");
	contact7.setLastName("Gg");

	Contact contact8;
	
	contact8.setFirstName("Hh");
	contact8.setLastName("Hh");

	Contact contact9;
	
	contact9.setFirstName("Ii");
	contact9.setLastName("Ii");

	Contact contact10;
	
	contact10.setFirstName("Jj");
	contact10.setLastName("Jj");

	phonebook.addContact(contact1);
	phonebook.addContact(contact2);
	phonebook.addContact(contact3);
	phonebook.addContact(contact4);
	phonebook.addContact(contact5);
	phonebook.addContact(contact6);
	phonebook.addContact(contact7);
	phonebook.addContact(contact8);
	phonebook.addContact(contact9);
	phonebook.addContact(contact10);
	
	phonebook.displayContacts();

	return 0;
}