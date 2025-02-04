/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:16:58 by jbremser          #+#    #+#             */
/*   Updated: 2025/02/04 15:30:22 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Memory address of string variable:" << &brain << "\n";
	std::cout << "Memory address held by stringPTR:" << stringPTR << "\n";
	std::cout << "Memory address held by stringREF:" << &stringREF << "\n";

	std::cout << "Value of string variable:" << brain << "\n";
	std::cout << "Value pointed to by stringPTR:" << *stringPTR << "\n";
	std::cout << "Value pointed to by stringREF:" << stringREF << "\n";	
	return (0);
}