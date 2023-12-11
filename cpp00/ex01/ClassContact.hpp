/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:37:24 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 11:45:26 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP
# include <iostream>
# include <string>
# define LEN 857

class  Contact {
 public:
    char  first_name[857];
    char  last_name[857];
    char  nickname[857];
    char  phone_number[857];
    char  darkest_secret[857];
    int    visible;

    Contact();
    ~Contact();
};

#endif

