/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:37:40 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/11 12:26:44 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	public:
	Weapon(const std::string &type); //constructor with initial type given as para
	// Weapon(std::string type);
	// ~Weapon();

	//setters
	void setType(const std::string &type); //setter member F. using param as type

	//getters
	const std::string &getType() const;  //getter member F. returns const ref to type


	private:
	std::string type;
};
















#endif