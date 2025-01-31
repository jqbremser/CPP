/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 18:13:58 by jbremser          #+#    #+#             */
/*   Updated: 2025/01/31 18:22:38 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main(){
	Zombie *horde;

	horde = zombieHorde(10, "Paul"); 
	for (int i = 0; i < 10; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}