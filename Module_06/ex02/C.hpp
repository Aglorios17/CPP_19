/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:17:41 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 18:13:11 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

class C;

# include <iostream>
# include "Base.hpp"

class	C : public Base
{
	public:
		C(void);
		C(const C &copy);
		C &operator=(const C &copy);
		~C(void);
};

#endif
