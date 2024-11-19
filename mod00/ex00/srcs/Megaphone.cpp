/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:37:27 by jbremser          #+#    #+#             */
/*   Updated: 2024/11/12 17:07:01 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE */n";
	if (argc > 1)
	{
		for (int j = 1; j < argc; j++)
		{
			for (size_t i = 0; i < std::strlen(argv[j]) ; i++)
			{
				if (islower(argv[j][i]))
					argv[j][i] = std::toupper(argv[j][i]);
			}
			std::cout << argv[j];
			if (j < argc - 1)
				std::cout << " ";
		}
	}
	return (0);
}