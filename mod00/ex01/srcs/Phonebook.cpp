/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:12:49 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/11 15:06:25 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {} // initialization list

//setter function declaration
void PhoneBook::setContact(const Contact& contact){
		
	this->currentIndex = 0;
	this->totalContacts = 1;
	contact.introduce();
}

//getter function declaration
void PhoneBook::getContacts() const{

} 

//getter function declaration, pulls specific details based on given index
void PhoneBook::getContactDetails(int index) {
	this->currentIndex = index;
	
}