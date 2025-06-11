/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:06:42 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/11 15:11:33 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string &name);
		void setWeapon(Weapon &weapon);
		void attack() const; //print message for attack

	private:
		std::string name; //name of humanb
		Weapon *weapon;
};

#endif