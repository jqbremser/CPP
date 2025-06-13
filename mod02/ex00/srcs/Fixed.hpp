/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:47:26 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/13 16:21:23 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		//	DEFAULT constructor
		Fixed();
		
		// COPY constructor
		Fixed(const Fixed &thing);

		// COPY ASSIGNMENT OPERATOR
		Fixed &operator=(const Fixed &thing);
	
		// DESTRUCTOR
		~Fixed();

		// RAW BITS getters & setters
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
	private:
		//Fixed-point number value
		int _fixedValue;
		
		//stores number of fractional bits, so set to 8
		static const int _fractionalBits = 8;
}

#endif