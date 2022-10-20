/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:34:43 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/20 13:08:27 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <algorithm>

using std::endl;
using std::cout;
using std::string;

class Span
{
		Span();

	public:

		class out_of_space : public std::exception{
					public:
						virtual const char* what() const throw(){return ("no more space in the Span");} 
				};

		class no_span_possible : public std::exception{
					public:
						virtual const char* what() const throw(){return ("no span are possible");} 
				};

		Span( Span const & src );
		Span( unsigned int N );
		~Span();
		Span &			operator=( Span const & rhs );

		void			addNumber( int i );
		int				shortestSpan();
		int				longestSpan();

		unsigned int	Size()			const;
		unsigned int	Iter()			const;
		int				Tab( int i )	const;

	private:

		unsigned int	_N;
		unsigned int	_current_stored_number;
		int*			_tab;

};

std::ostream &			operator<<( std::ostream & o, Span const & S );
