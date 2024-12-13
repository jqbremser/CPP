/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:11:05 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/13 15:02:36 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"


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
		for (unsigned long i = 0; i < input.length(); i++){
			input[i] = toupper(input[i]);
		}
		if (input == "ADD")
			phonebook.setContact();
		else if (input == "SEARCH"){
			phonebook.getContacts();
			if (phonebook.getTotalContacts() == -1){
				std::cout << "No Contacts added yet, please select ADD to add contacts:" << std::endl;
				continue;
			}
			std::cout << "Select an index number for more information: ";
			std::getline(std::cin, input);
			if (std::cin.eof()){
				std::cout << "Time to Exit!" << std::endl;
				exit(0);
			}
			while (true) {
				int num = input[0] - '0';
				if (num < 0 || num > phonebook.getTotalContacts() || input.size() > 1){
					if (phonebook.getTotalContacts() == 0)
						std::cout << "Only one contact under index number 0. Select 0 to proceed:";
					else
						std::cout << "Please select an index number from 0-" << phonebook.getTotalContacts() << ": ";
					std::getline(std::cin, input);
					if (std::cin.eof()){
						std::cout << "Time to Exit!" << std::endl;
						exit(0);
					}
				}
				else if ((num >= 0 && num <= 7) && (!input.empty() && input.size() == 1)) {
					phonebook.getContactDetails(num);
					break ;
				}
			}
		}
		else if (input == "EXIT"){
			std::cout << "Time to Exit!" << std::endl;
			exit(0);
		}

	}
}
	

