/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:21:30 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/12 17:02:23 by jbremser         ###   ########.fr       */
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

	while (true) {
		found = line.find(s1, start);
		if (found == std::string::npos) {
			result += line.substr(start);
			break;			
		}
		result += line.substr(start, found - start);
		result += s2;
		start = found + s1.length();
	}
	return result;
}

bool FileReplacer::replaceInFile() {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Cannot open file " << filename << " for reading.\n";
        return false;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Error: Cannot open file " << filename + ".replace" << " for writing.\n";
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replaceString(line) << std::endl;
    }

    inputFile.close();
    outputFile.close();
    return true;
}
