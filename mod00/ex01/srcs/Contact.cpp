/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:36:50 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/12 17:15:54 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"
#include "../Contact.hpp"

//Basic Constructor Declaration in an initialization list
Contact::Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

// Setter Function Declarations 
void Contact::setFirstName(const std::string& firstName) {this->firstName = firstName;}
void Contact::setLastName(const std::string& lastName) {this->lastName = lastName;}
void Contact::setNickname(const std::string& nickname) {this->nickname = nickname;}
void Contact::setPhoneNumber(const std::string& phoneNumber) {this->phoneNumber = phoneNumber;}
void Contact::setDarkestSecret(const std::string& darkestSecret) {this->darkestSecret = darkestSecret;}

// Getter function declarations
std::string Contact::getFirstName() const {return firstName;}
std::string Contact::getLastName() const {return lastName;}
std::string Contact::getNickname() const {return nickname;}
std::string Contact::getNumber() const {return phoneNumber;}
std::string Contact::getDarkestSecret() const {return darkestSecret;}

void Contact::introduce() const{
	std::cout << "Hi, my name is " << firstName << " " << lastName << " but you can call me " << nickname << " and you can reach me at " << phoneNumber << ". I haven'd told anyone this but "
	<< darkestSecret << " OKAY BYE." << std::endl;
};

// bool Contact::isEmpty() const {
// 	return firstName.empty() && lastName.empty() && nickname.empty() && phoneNumber.empty() && darkestSecret.empty();
// }

// bool Contact::isEmpty(std::string& info) const {
// 	return info.empty();
// }