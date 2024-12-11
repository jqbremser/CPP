/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:02:15 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/11 14:43:12 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <cstring>

#include "Contact.hpp"

class	PhoneBook
{
	public:
	PhoneBook();
	
	void setContact(const Contact& contact); //setter
	void getContacts() const; //getter
	void getContactDetails(int index); //get contacts with index number

	private:
		static const int MAX_CONTACTS = 8;
		Contact contacts[MAX_CONTACTS];
		int	currentIndex;
		int	totalContacts;	
};

#endif // PHONEBOOK_HPP
