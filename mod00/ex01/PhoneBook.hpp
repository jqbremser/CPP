/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:02:15 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/12 18:18:32 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <algorithm> //for std::transform
#include <iomanip> //for setw


#include "Contact.hpp"

class	PhoneBook
{
	public:
	PhoneBook();
	
	void setContact(); //setter
	void getContacts() const; //getter
	void getContactDetails(int index); //get contacts with index number
	void setInfo(Contact& contact, std::string input, std::string attrContact);

	private:
		static const int MAX_CONTACTS = 8;
		Contact contacts[MAX_CONTACTS];
		int	currentIndex;
		int	totalContacts;	
};

#endif // PHONEBOOK_HPP
