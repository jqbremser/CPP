/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:11:53 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/12 13:31:20 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr) {}

HumanB::~HumanB()
{
	std::cout << name << " has been destroyed. " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() const {
	if(weapon){
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	}
	else {
		std::cout << name << " has no weapon to attack with " << "\n";	
	}
}