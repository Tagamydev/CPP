/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:08:39 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/17 20:47:41 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class  Harl {
 public:
    Harl();
    ~Harl();
    void  complain(std::string level);
    void  complain(const char *level);
 private:
    void  debug(void);
    void  info(void);
    void  warning(void);
    void  error(void);
    void  def(void);
};

#endif
