/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:30:51 by samusanc          #+#    #+#             */
/*   Updated: 2023/10/23 14:45:12 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void  put_touper(char *str) {
  char  c[2] = {'\0', '\0'};
  for (int i = 0; str[i]; i++) {
    c[0] = toupper(str[i]);
    std::cout << c;
  }
}

int  main(int argc, char **argv) {
  (void)argv;
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
  } else {
    for (int i = 1; argv[i]; i++)
      put_touper(argv[i]);
  }
}
