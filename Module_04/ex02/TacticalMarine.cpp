/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 13:37:04 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl; 
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy)
{
	*this = copy;
	std::cout << "Tactical Marine ready for action !" << std::endl; 
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine &copy)
{
	(void)copy;
	return (*this);
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout <<  "Aaargh ..." << std::endl; 
}
		
ISpaceMarine *TacticalMarine::clone(void) const
{
	TacticalMarine *add = new TacticalMarine(*this);
	return (add);
}

void TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT !" << std::endl; 
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl; 
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout <<  "* attacks with a chainsword *" << std::endl; 
}
