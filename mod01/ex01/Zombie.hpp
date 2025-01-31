/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:40:34 by jbremser          #+#    #+#             */
/*   Updated: 2025/01/31 18:20:40 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>

class Zombie{
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	//setters
	void setName(const std::string& name);

	//getters
	std::string getName() const;

	//methods:functions
	void announce(void);

	private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);


#endif