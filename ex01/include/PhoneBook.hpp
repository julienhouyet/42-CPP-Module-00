/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:42 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 13:22:09 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact contacts[8];
		int contactCount;

	public:
		PhoneBook() : contactCount(0) {};
		
		void addContact();
		void insertContact(const Contact& contact);
		void displayContacts() const;
		void displayContact(int i) const;
		void searchContact() const;
};

#endif