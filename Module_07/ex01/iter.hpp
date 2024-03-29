/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:41:39 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/29 13:41:23 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, int n, void (*t)(T const &))
{
	int i = 0;
	while (i < n)
		t(array[i++]);
}

template <typename T>
void affichage(T t)
{
	std::cout << t << std::endl;
}

#endif
