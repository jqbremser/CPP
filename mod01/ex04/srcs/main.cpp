/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:32:24 by jbremser          #+#    #+#             */
/*   Updated: 2025/06/12 16:34:11 by jbremser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FileReplacer.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Please insert your desired texts to replicate as follows: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty.\n";
        return 1;
    }

    FileReplacer replacer(filename, s1, s2);
    if (!replacer.replaceInFile()) {
        std::cerr << "Replacement failed.\n";
        return 1;
    }

    std::cout << "Replacement completed. Output written to " << filename << ".replace\n";
    return 0;
}
