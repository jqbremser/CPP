/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:32:35 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/11 15:33:18 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
	{
		{
			Weapon club = Weapon("crude spiked club");

			HumanA	bob("Bob", club);
			bob.attack();
			club.setType("other type of club");
			bob.attack();
		}
		
		{
				
			Weapon club = Weapon("Billy Club");
			HumanB bill("Bill");
			bill.attack();
			bill.setWeapon(club);
			bill.attack();
			club.setType("other club");
			bill.attack();
		}
	}
}