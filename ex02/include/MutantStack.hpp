/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:41:54 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/21 12:02:53 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stack>
# include <deque>

using std::cout;
using std::endl;
using std::string;

template < typename T >
class MutantStack : public std::stack< T >
{

	public:

		MutantStack() {}
		MutantStack( MutantStack const & src ) {
			*this = src;
		}
		~MutantStack() {}

		MutantStack &		operator=( MutantStack const & rhs ) {
			if (this != &rhs)
			{
				this->c = rhs.c;
			}
			return (*this);
		}
		
		typedef typename MutantStack::container_type::iterator iterator;
		
		iterator	begin() {
			return (this->c.begin());
		}
		iterator	end() {
			return (this->c.end());
		}

	private:

};
