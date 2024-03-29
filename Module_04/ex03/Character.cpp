/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 16:00:14 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string name) 
{
	this->Name = name;
}

Character::~Character(void) {}

Character::Character(const Character & copy) 
{
	Name = copy.Name;
	number = copy.number;
}

Character & Character::operator=(const Character & copy) 
{
	int i = 0;

	if (this != &copy)
	{
		Name = copy.Name;
		number = copy.number;
		while (i++ < 4)
		{
			this->inventory[i] = NULL;
			this->inventory[i] = copy.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName(void) const
{
	return (this->Name);
}

void Character::equip(AMateria* m)
{
	if (this->number >= 0 && this->number < 3)
	{
		this->inventory[this->number] = m;
		this->number += 1;
	}
}

void Character::unequip(int idx) 
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (!this->inventory[idx])
		return ;
	if (idx < this->number)
		this->inventory[idx]->use(target);
}
