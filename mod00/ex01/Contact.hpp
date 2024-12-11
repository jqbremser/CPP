/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:08:11 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/11 13:45:15 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cctype>
#include <cstring>

class	Contact
{
	public:
	// CONSTRUCTORS
	Contact();

	// SETTERS
	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& lastName);
	void setNickname(const std::string& nickname);
	void setPhoneNumber(const std::string& phoneNumber);
	void setDarkestSecret(const std::string& darkestSecret);
    
	// GETTERS
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getNumber() const;
	std::string getDarkestSecret() const;

	void introduce() const;
	bool isEmpty() const;

	private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;	
};

#endif // CONTACT_HPP