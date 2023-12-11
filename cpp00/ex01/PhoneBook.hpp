/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classi.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 11:35:58 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClassPhoneBook.hpp>

void  PhoneBook::addcontact(void) {
  Contact  *x;

  x = this->contacts + this->ii;
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Add first name:" << std::endl;
  std::cin.getline(x->first_name, LEN);
  std::cout << "Add last name:" << std::endl;
  std::cin.getline(x->last_name, LEN);
  std::cout << "Add nickname:" << std::endl;
  std::cin.getline(x->nickname, LEN);
  std::cout << "Add phone number:" << std::endl;
  std::cin.getline(x->phone_number, LEN);
  std::cout << "Add darkest secret:" << std::endl;
  std::cin.getline(x->darkest_secret, LEN);
  x->visible = 1;
  if (this->ii >= 7)
    this->ii = 0;
  else
    this->ii++;
  return;
}

void  short_display(char *str) {
  int    i;
  char  tmp[2];

  i = 0;
  tmp[1] = '\0';
  while (str[i] && i < 9) {
    tmp[0] = str[i];
    std::cout << tmp;
    i++;
  }
  while (i <= 9) {
    std::cout << " ";
    i++;
  }
  if (str[i] >= 9)
    std::cout << ".";
  std::cout << "\t|";
}

void  PhoneBook::search(void)
{
  Contact  *x;

  x = this->contacts;
  if (!x->visible)
    return;
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Contacts:" << std::endl;
  int  i = 0;
  while (i != 8) {
    x = this->contacts + i;
    if (x->visible) {
      std::cout << "[" << i << "]" << " | ";
      short_display(x->first_name);
      std::cout << " ";
      short_display(x->last_name);
      std::cout << " ";
      short_display(x->nickname);
      std::cout << " ";
      short_display(x->phone_number);
      std::cout << " ";
      short_display(x->darkest_secret);
      std::cout << " ";
      std::cout << std::endl;
    }
    i++;
  }
  char  cmd[5];
  std::cout << "The chosen one:" << std::endl;
  std::cin.getline(cmd, 5);
  std::cin.clear();
  std::cout << "Press Enter to continue... ";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  i = atoi(cmd);
  if (i < 0 || i > 7 || !*cmd)
    return;
  this->seecontact(i);
  return;
}

void  PhoneBook::seecontact(size_t y) {
  if (y >= 8)
    return;
  Contact  *x = this->contacts + y;
  if (!x->visible)
    return;
  std::cout << "\033[2J\033[1;1H";
  std::cout << "first name: " << x->first_name << std::endl;
  std::cout << "last name :" << x->last_name << std::endl;
  std::cout << "nickname: " << x->nickname << std::endl;
  std::cout << "phone number: " << x->phone_number << std::endl;
  std::cout << "darkest secret: " << x->darkest_secret << std::endl;
}

PhoneBook::PhoneBook() {
  this->ii = 0;
  std::cout << "Constructor PhoneBook called" << std::endl;
  return;
}

PhoneBook::~PhoneBook() {
  std::cout << "Destructor PhoneBook called" << std::endl;
  return;
}
