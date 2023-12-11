/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 11:32:44 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int  main() {
  PhoneBook hola;
  int    exit;
  char  cmd[10];

  exit = 0;
  std::cout << "\033[2J\033[1;1H";
  std::cout << "My Awesome PhoneBook" << std::endl;
  std::cout << "Press Enter to continue... ";
  std::cin.ignore();
  while (!exit) {
    std::cout << "\033[2J\033[1;1H";
    std::cout << "Enter command:" << std::endl;
    std::cin.getline(cmd, 10);
    std::cin.clear();
    std::cout << "Press Enter to continue... ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (!strncmp(cmd, "ADD", 10))
      hola.addcontact();
    else if (!strcmp(cmd, "SEARCH"))
      hola.search();
    else if (!strcmp(cmd, "EXIT"))
      exit = 1;
    else
      std::cout << "\033[2J\033[1;1H" << "Invalid command" << std::endl;
    std::cout << "Press Enter to continue... ";
    std::cin.ignore();
  }
}
