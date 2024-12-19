/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:40:09 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/19 16:43:33 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

	//Basic constructor declaration/init list
	Zombie::Zombie() : _name("Joe") {}
	Zombie::Zombie(std::string name) : _name(name) {}


	//SETTER function declarations
	void Zombie::setName(const std::string& name) {this->_name = name;}

	//GETTER function declarations
	std::string Zombie::getName() const {return _name;}

	void Zombie::announce(void){
		std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}

	Zombie* Zombie::newZombie(std::string name){
		Zombie *zombie = new Zombie(name);
		zombie->setName(name);
		// zombie->announce();
		return zombie;
	}

	void Zombie::randomChump( std::string name){
		Zombie zombie;
		zombie.setName(name);
		zombie.announce();
	}