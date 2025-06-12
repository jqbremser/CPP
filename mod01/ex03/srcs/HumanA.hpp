/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:34:26 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/12 13:28:39 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		void attack() const; //print message for attack
	
	private:
		std::string name;
		Weapon &weapon; // reference to weapon which is ALWAYS armed
	
	
};

#endif
//getters
// const std::string &getName() const:
// const std::string &getWeapon() const:


//methods/functions:
// void HumanA::attack() const;