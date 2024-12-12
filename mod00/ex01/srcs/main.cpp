/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:11:05 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/12 18:16:23 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"

// std::string trueUpper(std::string str){
// 	std::string ch;

// //   cout << "The uppercase version of \"" << str << "\" is " << endl;

//   for (int i = 0; i < str.length(); i++) {

//     // convert str[i] to uppercase
//     ch = toupper(str[i]);


//     return ch;
//   }
// }

int main(){
	PhoneBook	phonebook;
	std::string	input;
	while (true){
		std::cout << "Enter Command to procede (ADD, SEARCH, EXIT):";
		std::getline(std::cin, input);
		if (std::cin.eof()){
			std::cout << "Time to Exit!" << std::endl;
			exit(0);
		}
		std::transform(input.begin(), input.end(), input.begin(), ::toupper); // std::toupper(input, input.length());
		if (input == "ADD")
			phonebook.setContact();
		else if (input == "SEARCH"){
			phonebook.getContacts();
			std::cout << "SEARCH" << std::endl;
		}
		else if (input == "EXIT"){
			std::cout << "Time to Exit!" << std::endl;
			exit(0);
		}

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
