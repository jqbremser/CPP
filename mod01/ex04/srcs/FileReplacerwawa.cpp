/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:38:01 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/12 16:20:56 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

//constructor to init member vars
FileReplacer::FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2)
	: filename(filename), s1(s1), s2(s2) {}

std::string FileReplacer::replaceString(const std::string &line) const {
	std::string result;
	std::size_t start = 0;
	std::size_t found;
	
	//found is position that s1 matchs s2, so while loop until found is est. or end of line (npos)
	while ((found = line.find(s1, start)) != std::string::npos) {
		//add text before s1 to front of newLine
		result += line.substr(start, found - start);
		//add s2 which is replacing s1
		result += s2;
		start = found + s1.length();
	}
	//add the remaining part of the line after the initial match, if not at NPOS
	result += line.substr(start);
	return result;
}

bool FileReplacer::replaceInFile() {
	struct stat fileInfo;
	
	if (stat(filename))
}