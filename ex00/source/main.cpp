/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:06:36 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/20 09:17:19 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int main( void ) {

	std::array<int,5>	A = {1, 5, 3, 7, 6};
	const std::array<int,5>	B = {1, 5, 3, 7, 6};
	std::vector<int>	C(42, 3);
	const std::vector<int>	D(42, 3);
	std::list<int>	L;
	L.push_back(1);
	L.push_back(5);
	L.push_back(3);
	L.push_back(8);
	L.push_back(42);
	cout << easyfind(A, 6) << endl;
	cout << easyfind(B, 3) << endl;
	cout << easyfind(C, 3) << endl;
	cout << easyfind(D, 4) << endl;
	cout << easyfind(L, 42) << endl;
}