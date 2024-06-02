/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:16:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 07:28:13 by jhouyet          ###   ########.fr       */
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
	contact1.setLastName("Houyet Dis Harois de Walsaur");
	contact1.setNickName("Raks3010");
	contact1.setPhoneNumber("0472652064");
	contact1.setDarkestSecret("Je ne te fais pas confiance.");

	Contact contact2;
	
	contact2.setFirstName("Malika");
	contact2.setLastName("Wahmane");
	contact2.setNickName("MalikaWah");
	contact2.setPhoneNumber("0478458978");
	contact2.setDarkestSecret("J'ai un mari en or !");

	phonebook.addContact(contact1);
	phonebook.addContact(contact2);
	
	phonebook.displayContacts();

	return 0;
}