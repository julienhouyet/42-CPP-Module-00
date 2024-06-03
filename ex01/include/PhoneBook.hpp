/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:42 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/03 15:31:46 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook 
{
	public:
		PhoneBook();
		~PhoneBook();
		
		void addContact();
		void insertContact(const Contact& contact);
		void displayContacts() const;
		void displayContact(int i) const;
		void searchContact() const;

	private:
		Contact _contacts[8];
		int _contactCount;
};

#endif