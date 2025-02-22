/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:36:06 by jbremser          #+#    #+#             */
/*   Updated: 2025/01/31 17:38:38 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main() {
	Zombie	zombie;
	{
		zombie.announce();
	}
	Zombie *test1 = zombie.newZombie("Katja");
	test1->announce();
	Zombie test2;
	test2.randomChump("Chump");
	test2.announce();
	zombie.announce();
	delete test1;
			std::cout << "provide the name of the zombie " << test2.getName() << "\n";
  
}