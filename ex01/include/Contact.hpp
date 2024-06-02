/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:47 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 07:22:53 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		void setFirstName (std::string fName) { firstName = fName; }
		void setLastName (std::string lName) { lastName = lName; }
		void setNickName (std::string nName) { nickName = nName; }
		void setPhoneNumber (std::string pNumber) { phoneNumber = pNumber; }
		void setDarkestSecret (std::string dSecret) { darkestSecret = dSecret; }

		std::string getFirstName() const { return firstName; }
		std::string getLastName() const { return lastName; }
		std::string getNickName() const { return nickName; }
		std::string getPhoneNumber() const { return phoneNumber; }
		std::string getDarkestSecret() const { return darkestSecret; }
};

#endif