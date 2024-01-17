/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/17 20:39:50 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void findAndReplace(std::string& str, \
const std::string& toFind, const std::string& toReplace) {
  size_t pos = str.find(toFind);
  while (pos != std::string::npos) {
    str = str.substr(0, pos) + toReplace + str.substr(pos + toFind.length());
    pos = str.find(toFind, pos + toReplace.length());
  }
}

int  main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "wrong number of arguments" << std::endl;
  } else {
    argv++;
    std::string buff;
    std::string file = argv[0];
    std::string newFile = file + ".replace";
    std::string  find = argv[1];
    std::string  replace = argv[2];
    std::ofstream outFile(newFile);
    if (outFile.is_open()) {
      std::ifstream inFile(file);
      if (inFile.is_open()) {
        while (std::getline(inFile, buff)) {
          findAndReplace(buff, find, replace);
          outFile << buff << std::endl;
        }
        inFile.close();
        std::cout << "Archivo copiado exitosamente." << std::endl;
      } else {
        std::cerr << \
        "file can not be open, pls try different name" << std::endl;
      }
      outFile.close();
      return 1;
    } else {
      std::cerr << "file can not be created, pls try different name" << \
      std::endl;
      return 1;
    }
  }
}
