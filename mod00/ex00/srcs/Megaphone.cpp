/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:37:27 by jbremser          #+#    #+#             */
/*   Updated: 2024/12/10 16:09:29 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	if (argc > 1) // change to else
	{
		for (int j = 1; j < argc; j++)
		{
			for (size_t i = 0; i < std::strlen(argv[j]) ; i++)
			{
				if (islower(argv[j][i]))
					argv[j][i] = std::toupper(argv[j][i]);
			}
			std::cout << argv[j];
		}
		std::cout << std::endl;
	}
	return (0);
}