/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:11:05 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/11 15:02:46 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"



int main(){
	PhoneBook	phonebook;
	Contact		contact;
	std::string	input;
	while (true){
		std::cout << "Enter Command to procede (ADD, SEARCH, EXIT):";
		std::getline(std::cin, input);
		if (std::cin.eof()){
			std::cout << "Time to Exit!" << std::endl;
			break;
		}

		if (input == "ADD")
			phonebook.setContact(contact);
		else if (input == "SEARCH")
			std::cout << "SEARCH" << std::endl;	
	}


}
	// Contact	contact;
	// contact.setFirstName("Joseph ");
	// contact.setLastName("Bremser");
	// contact.setNickname("Joe");
	// contact.setPhoneNumber("456076622");
	// contact.setDarkestSecret("I like all people!");
	// contact.introduce();
	// PhoneBook	phonebook;
	// Contact		contactInfo;
	// std::string	input;

	// input = "Joe";
	// contactInfo.setfirstName(input);
	// contactInfo.getfirstName();



	// while (true)
	// {
	// 	std::cout << "ENTER COMMAND (ADD, SEARCH, EXIT):";
	// 	std::getline(std::cin, input);
		
	// 	if (std::cin.eof())
	// 	{
	// 		std::cout << "\nExiting..." << std::endl;
	// 		break;
	// 	}
	// 	if (input == "ADD")
	// 	{
	// 		setContact()
	// 	}
	// }
