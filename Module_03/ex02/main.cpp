/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:58 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:55 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	system("clear");
	std::cout << "////////// INIT CLAP TRAP////////" << std::endl;
	FragTrap a("Alessio");
	ScavTrap b("Elias");
	std::cout << "///////////////// 1 /////////////" << std::endl;
	a.rangedAttack(b.get());
	b.takeDamage(a.get("Ranged"));
	std::cout << "///////////////// 2 /////////////" << std::endl;
	b.beRepaired(5);
	std::cout << "///////////////// 3 /////////////" << std::endl;
	a.meleeAttack(b.get());
	b.takeDamage(a.get("Melee"));
	std::cout << "///////////////// 4 /////////////" << std::endl;
	b.meleeAttack(b.get());
	a.takeDamage(a.get("Melee"));
	std::cout << "///////////////// 5 /////////////" << std::endl;
	int i = a.vaulthunter_dot_exe(b.get());
	b.takeDamage(i);
	std::cout << "///////////////// 6 /////////////" << std::endl;
	a.meleeAttack(b.get());
	b.takeDamage(a.get("Melee"));
	std::cout << "///////////////// A /////////////" << std::endl;
	a.show();
	std::cout << "///////////////// B /////////////" << std::endl;
	b.show();
	std::cout << "\n" << std::endl;
	return (1);
}
