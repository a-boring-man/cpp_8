/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:35:31 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/20 14:55:15 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span( const Span & src ) : _N(src._N), _current_stored_number(src._current_stored_number) {

	delete[] _tab;
	_tab = new int[src._N];
	for (size_t i = 0; i < _N; i++)
	{
		_tab[i] = src._tab[i];
	}
	return;
}

Span::Span( unsigned int N ) : _N(N), _current_stored_number(0) {

	_tab = new int[_N];
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {

	delete[] _tab;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		delete[] _tab;
		_N = rhs._N;
		_tab = new int[rhs._N];
		for (size_t i = 0; i < _N; i++)
		{
			_tab[i] = rhs._tab[i];
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & S )
{
	o << "max space : " << S.Size() << endl;
	o << "current iterrator is : " << S.Iter() << endl;
	for (size_t i = 0; i < S.Iter(); i++)
	{
		o << "i : " << i << " value : " << S.Tab(i) << endl;
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Span::addNumber( int i ) {

	if (_current_stored_number == _N)
		throw out_of_space();
	cout << "adding number : " << i << endl;
	_tab[_current_stored_number] = i;
	_current_stored_number++;
}

void			Span::addLotOfNumber( std::vector<int>::iterator it1, std::vector<int>::iterator it2 ) {

	while (it1 != it2)
	{
		addNumber(*it1);
		it1++;
	}
}

int				Span::shortestSpan() {

	if (_current_stored_number < 2)
		throw no_span_possible();
	std::sort(_tab, _tab + _current_stored_number);
	static int	Smallest = 0;
	for (size_t i = 0; i < _current_stored_number - 1; i++)
	{
		if (!(_tab[i + 1] - _tab[i]))
			return (0);
		if (!Smallest || _tab[i + 1] - _tab[i] < Smallest)
			Smallest = _tab[i + 1] - _tab[i];
	}
	return (Smallest);
}

int				Span::longestSpan() {

	if (_current_stored_number < 2)
		throw no_span_possible();
	std::sort(_tab, _tab + (_current_stored_number));
	return (_tab[_current_stored_number - 1] - _tab[0]);
}

unsigned int	Span::Size( void ) const {

	return (_N);
}

unsigned int	Span::Iter( void ) const {

	return (_current_stored_number);
}

int				Span::Tab(int i) const {

	return (_tab[i]);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */