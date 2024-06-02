/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:50 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 13:59:57 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string fName) 
{ 
	firstName = fName; 
}

void Contact::setLastName(const std::string lName)
{ 
	lastName = lName; 
}

void Contact::setNickName(const std::string nName) 
{ 
	nickName = nName; 
}

void Contact::setPhoneNumber(const std::string pNumber) 
{ 
	phoneNumber = pNumber; 
}

void Contact::setDarkestSecret(const std::string dSecret) 
{ 
	darkestSecret = dSecret; 
}

const std::string Contact::getFirstName() const 
{ 
	return firstName; 
}

const std::string Contact::getLastName() const 
{ 
	return lastName;
}

const std::string Contact::getNickName() const 
{ 
	return nickName;
}

const std::string Contact::getPhoneNumber() const 
{ 
	return phoneNumber;
}

const std::string Contact::getDarkestSecret() const 
{ 
	return darkestSecret;
}