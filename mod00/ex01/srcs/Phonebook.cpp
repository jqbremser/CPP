/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:12:49 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/13 15:28:54 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {} // initialization list

//setter function declaration

void PhoneBook::setContact() {
	std::string input;
	Contact contact;
	
	// set names
	setInfo(contact, input, "first name");
	setInfo(contact, input, "last name");
	setInfo(contact, input, "nickname");

	// set phone number
	std::cout << "Enter your phone number(9 or 10 digits/letters): ";
	std::getline(std::cin, input);
	if (std::cin.eof()){
		std::cout << "Time to Exit!" << std::endl;
		exit(0);
	}
	while (input.length() != 9 && input.length() != 10){
		std::cout << "Phone Number was incorrectly inputted: " << input << std::endl << "Try again please: ";
		std::getline(std::cin, input);
		if (std::cin.eof()){
			std::cout << "Time to Exit!" << std::endl;
			exit(0);
		}
	}
	contact.setPhoneNumber(input);
	
	//set darkest secret
	setInfo(contact, input, "darkest secret");

	contacts[currentIndex] = contact;
	currentIndex = (currentIndex + 1) % MAX_CONTACTS; //iterate up, and then slot it in the 0-7, based on the modulo
	if (totalContacts < MAX_CONTACTS) {
        totalContacts++;
    }
}

void PhoneBook::setInfo(Contact& contact, std::string input, std::string attrContact){
	std::cout << "Enter your " << attrContact << ": ";
	std::getline(std::cin, input);
	if (std::cin.eof()){
		std::cout << "Time to Exit!" << std::endl;
		exit(0);
	}
	while (input.empty()){
		std::cout << attrContact << " was incorrectly inputted: " << input << std::endl << "Try again please: ";
		std::getline(std::cin, input);
		if (std::cin.eof()){
			std::cout << "Time to Exit!" << std::endl;
			exit(0);
		}
	}
	if (attrContact == "first name")
		contact.setFirstName(input);
	if (attrContact == "last name")
		contact.setLastName(input);
	if (attrContact == "nickname")
		contact.setNickname(input);
	if (attrContact == "darkest secret")
		contact.setDarkestSecret(input);
}


//getter function declaration
void PhoneBook::getContacts() const{
    std::cout << std::setw(10) << "Index" << "|" 
              << std::setw(10) << "First Name" << "|" 
              << std::setw(10) << "Last Name" << "|" 
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < totalContacts; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|"
                  << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|"
                  << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) << std::endl;
    }
}

int		PhoneBook::getTotalContacts() const{
	if (totalContacts == 0)
		return (-1);
	else
		return (totalContacts - 1);
}


//getter function declaration, pulls specific details based on given index
void PhoneBook::getContactDetails(int input) {
	contacts[input].introduce();
	}