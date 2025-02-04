/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:34:26 by jbremser          #+#    #+#             */
/*   Updated: 2025/02/04 16:17:37 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	//getters
	// const std::string &getName() const:
	// const std::string &getWeapon() const:


	//methods/functions:
	void HumanA::attack() const;

	private:
	std::string _name;
	Weapon &weapon;


}







#endif