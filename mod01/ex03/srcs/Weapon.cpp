/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:29 by jbremser          #+#    #+#             */
/*   Updated: 2025/02/04 15:56:13 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

void Weapon::setType(const std::string &type){
	_type = type;
}

const std::string &Weapon::getType() const{
	return (_type);
}