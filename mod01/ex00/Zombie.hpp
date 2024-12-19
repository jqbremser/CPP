/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:40:07 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/19 16:35:24 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
// #include <cctype>
// #include <cstring>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string name);

	//setters
	void	setName(const std::string& name);


	//getters
	std::string getName() const;

	void announce(void);
	Zombie* newZombie(std::string name);
	void 	randomChump(std::string name);

	private:
	std::string _name;



};

#endif //ZOMBIE_HPPs