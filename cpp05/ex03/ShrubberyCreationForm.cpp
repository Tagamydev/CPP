/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:45:14 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/17 02:52:50 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>
#include <cstdlib>
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "infinite";
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
	std::cout << "ShrubberyCreationForm overload constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
		this->target  = copy.target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	*this = copy;
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

void	treeGenerator(std::string target)
{
	std::string		fileName = target + "_shrubbery";
	const char		*cstr = fileName.c_str();
	std::ofstream		outFile(cstr);
	int			random;

	if (outFile.is_open())
	{
		random = (rand() % 10) + 1;
		if (random < 3)
		{
			outFile << 
			"         ,.,\n" <<
			"        MMMM_    ,..,\n" <<
			"          \"_ \"__\"MMMMM          ,...,,\n" <<
			"   ,..., __.\" --\"    ,.,     _-\"MMMMMMM\n" <<
			"  MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"\n" <<
			"   \"\"\"\"\"    \"\" , \\_.   \"_. .\"\n" <<
			"          ,., _\"__ \\__./ .\"\n" <<
			"         MMMMM_\"  \"_    ./\n" <<
			"          ''''      (    )\n" <<
			"   ._______________.-'____\"---._.\n" <<
			"    \\                          /\n" <<
			"     \\________________________/\n" <<
			"     (_)                    (_)\n" <<
			std::endl << "this bonsai is in da " << target
			<< std::endl;
		}
		else if (random < 8)
		{
			outFile << 
			"                                 ,\\\n" <<
			"                                # (_\n" <<
			"                                  _)\\##\n" <<
			"                              ###/((_\n" <<
			"                                   ))\\####\n" <<
			"                                 _((     \n" <<
			"                            ####/  )\\\n" <<
			"                                 ,;;\"`;,\n" <<
			"                                (_______)\n" <<
			"                                  \\===/\n" <<
			"                                  /===\\\n" <<
			"                                 /=aat=\\" <<
			std::endl << "this bonsai is in da " << target
			<< std::endl;
		}
		else
		{
			outFile << 
			"               &&\n" <<
			"             &&&&&\n" <<
			"           &&&\\/& &&&\n" <<
			"          &&|,/  |/& &&\n" <<
			"           &&/   /  /_&  &&\n" <<
			"             \\  {  |_____/_&\n" <<
			"             {  / /          &&&\n" <<
			"             `, \\{___________/_&&\n" <<
			"              } }{       \\\n" <<
			"              }{{         \\____&\n" <<
			"             {}{           `&\\&&\n" <<
			"             {{}             &&\n" <<
			"       , -=-~{ .-^- _" <<
			std::endl << "this bonsai is in da " << target
			<< std::endl;
		}
		outFile.close();
	}
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getSignGrade())
		throw	GradeTooLowException();
	if (this->isSigned())
		treeGenerator(this->target);
	else
		throw	FormNotSignedException();
}

AForm* ShrubberyCreationForm::clone() const
{
	return (new ShrubberyCreationForm(this->target));
}
