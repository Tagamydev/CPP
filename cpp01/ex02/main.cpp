/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/17 19:58:39 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int  main() {
  std::string  string = "HI THIS IS BRAIN";
  std::string  *stringPTR = &string;
  std::string  &stringREF = string;
//=======================================//
  std::cout << &stringREF << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << &string << std::endl;
//=======================================//
  std::cout << stringREF << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << string << std::endl;
}
