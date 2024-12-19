/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:36:06 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/19 16:44:44 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main() {
	Zombie	zombie;
	{
		// zombie.newZombie("John");
		// zombie.setName();
		// (void)argv;
		zombie.announce();
		
	}
	Zombie *test1 = zombie.newZombie("Katja");
	test1->announce();
	delete test1;
	Zombie test2;
	test2.randomChump("Chump");
	// delete test2;
	// zombie.announce();
			// std::cout << "provide the name of the zombie" << std::endl;

}