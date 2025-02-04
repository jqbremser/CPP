/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:44:56 by jbremser          #+#    #+#             */
/*   Updated: 2025/01/31 18:31:33 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

	//Basic constructor dec/init list
	Zombie::Zombie() : _name("Nemo") {}
	Zombie::Zombie(std::string name): _name(name) {} 
	Zombie::~Zombie() {std::cout << this->_name << " must be destroyed. Throw " << this->_name << " into the fire!\n";}

	//SETTER function definition

	void Zombie::setName(const std::string& name){this->_name = name;}

	//GETTER function definition
	std::string Zombie::getName() const {return _name;}

	//functions/methods
	void Zombie::announce() {std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";}
	Zombie* zombieHorde(int N, std::string name) {
		Zombie *horde = new Zombie[N];
		// 	// catch memory allocation failure here!
		for (int i = 0; i < N; i++)
			horde[i].setName(name);
		return (horde);
	}
