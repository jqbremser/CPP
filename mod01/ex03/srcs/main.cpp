/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:32:35 by jbremser          #+#    #+#             */
/*   Updated: 2025/02/04 16:17:08 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main(){
	{
		Weapon club = Weapon("crude spiked club");

		HumanA	bob("bob", club);
		bob.attack();
	}
}