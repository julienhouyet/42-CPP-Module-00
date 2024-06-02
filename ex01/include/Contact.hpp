/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:13:47 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/02 14:33:38 by jhouyet          ###   ########.fr       */
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
		Contact();
		~Contact();
		
		void setFirstName(const std::string firstName);
		void setLastName(const std::string lastName);
		void setNickName(const std::string nickName);
		void setPhoneNumber(const std::string phoneNumber);
		void setDarkestSecret(const std::string darkestSecret);

		const std::string getFirstName() const;
		const std::string getLastName() const;
		const std::string getNickName() const;
		const std::string getPhoneNumber() const;
		const std::string getDarkestSecret() const;
};

#endif