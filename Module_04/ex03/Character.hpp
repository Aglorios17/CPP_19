/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 16:01:55 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character;
# include <iostream>
# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Fire.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*inventory[4];
		std::string	Name;
		int			number;
	public:
		Character(void);
		Character(std::string name);
		Character(const Character & copy);
		Character & operator=(const Character & copy);
		virtual ~Character(void);
		std::string const & getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
