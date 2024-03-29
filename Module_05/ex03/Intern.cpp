/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/23 14:26:15 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Form *Intern::makeForm(std::string Name, std::string Target)
{
	Form *arrayform[] = {(new RobotomyRequestForm(Target)), (new PresidentialPardonForm(Target)), (new ShrubberyCreationForm(Target))};
	Form *form = NULL;
	try 
	{
		if (Name == "robotomy request")	
		{
			form = arrayform[0];
			std::cout << "Intern creates " << form->getForm() << std::endl;
			return (form);
		}
		if (Name == "presidential pardon")	
		{
			form = arrayform[1];
			std::cout << "Intern creates " << form->getForm() << std::endl;
			return (form);
		}
		if (Name == "shrubberry creation")	
		{
			std::cout << "Intern creates " << form->getForm() << std::endl;
			return (form);
		}
		throw(CannotCreate());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (NULL);
}

Intern::Intern(const Intern & copy)
{
	(void)copy;
}

Intern & Intern::operator=(const Intern & copy)
{
	(void)copy;
	return (*this);
}

const char *Intern::CannotCreate::what(void) const throw()
{
	return ("Failed : create form.");
}
