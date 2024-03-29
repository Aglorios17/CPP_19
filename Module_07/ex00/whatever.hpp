/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:41:39 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/29 12:14:30 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template <typename T>
T min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

#endif
