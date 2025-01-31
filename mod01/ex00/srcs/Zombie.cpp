/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:40:09 by jbremser          #+#    #+#             */
/*   Updated: 2025/01/31 18:23:35 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

	//Basic constructor declaration/init list
	Zombie::Zombie() : _name("Anon") {}
	Zombie::Zombie(std::string name) : _name(name) {}
	Zombie::~Zombie() {std::cout << this->_name << " must be destroyed. Throw him into the fire!\n";}


	//SETTER function declarations
	void Zombie::setName(const std::string& name) {this->_name = name;}

	//GETTER function declarations
	std::string Zombie::getName() const {return _name;}

	void Zombie::announce(void){
		std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}

	Zombie* Zombie::newZombie(std::string name){
		Zombie *zombie = new Zombie(name);
		return zombie;
	}

	void Zombie::randomChump( std::string name){
		Zombie zombie(name);
		zombie.announce();
	}