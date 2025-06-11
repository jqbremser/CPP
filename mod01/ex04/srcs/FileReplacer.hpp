/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:38:14 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/11 15:48:57 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sys/stat.h>

class FileReplacer {
	public:
		FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2);
		bool replaceInFile();

	private:
		std::string filename;
		std::string s1;
		std::string	s2;

		std::string replaceString(const std::string &line) const;
	};
	
#endif