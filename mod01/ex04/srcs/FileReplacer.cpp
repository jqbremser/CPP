/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:38:01 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/11 15:55:54 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

//constructor to init member vars
FileReplacer::FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2)
	: filename(filename), s1(s1), s2(s2) {}

std::string FileReplacer::replaceString(const std::string &line) const {
	std::string modifiedLine;
	std::size_t start = 0;
	std::size_t found;
}