/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:06:36 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/20 14:26:27 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main( void ) {

	Span	S = Span(42);
	cout << S;
	S.addNumber(18);
	S.addNumber(31);
	S.addNumber(145);
	S.addNumber(2);
	S.addNumber(12);
	S.addNumber(95);
	S.addNumber(58);
	cout << S << endl;
	cout << "min span is : " << S.shortestSpan() << endl;
	cout << S << endl;
	cout << "max span is : " << S.longestSpan() << endl;
}

/* int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
} */