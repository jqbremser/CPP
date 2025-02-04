/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:57:42 by jbremser          #+#    #+#             */
/*   Updated: 2025/02/04 16:17:27 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

// const std::string &HumanA::getName() const {
// 	return (_name);
// }

// const std::string &HumanA::getWeapon() const {
// 	return (weapon)
// }


void HumanA::attack() const{
	std::cout << _name << " attacks with their " << weapon.getType() << "/n";
}

