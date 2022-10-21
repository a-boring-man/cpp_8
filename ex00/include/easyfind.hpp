/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:06:33 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/21 09:33:09 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <array>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::string;

template < typename T >
int	easyfind( const T& cont, const int i ) {
	typename T::const_iterator	it = cont.cbegin();
	typename T::const_iterator	ite = cont.cend();
	typename T::const_iterator itt = std::find(it, ite, i);
	size_t j = 0;
	while (it != itt)
	{
		j++;
		it++;
	}
	if (it != ite)
		return (j);
	return (-1);
}