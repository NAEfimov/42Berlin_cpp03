/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:19:59 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 17:59:35 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(void) {
	std::cout << "==== FragMike ====" << std::endl;
	FragTrap ft("FragMike");
	ft.attack("Phill");
	ft.highFivesGuys();
	ft.takeDamage(8);
	ft.takeDamage(1);
	ft.takeDamage(90);
	ft.beRepaired(1);
	ft.takeDamage(2);

	std::cout << std::endl << "==== FragTraps array ====" << std::endl;
	std::cout << "<Constructors>" << std::endl;
	FragTrap *ftraps[3];
	for (int i = 0; i < 3; ++i) {
		ftraps[i] = new FragTrap("one_FragTrap");
	}
	std::cout << "<Constructors done>" << std::endl;

	std::cout << std::endl << "<Methods>" << std::endl;
	for (int i = 0; i < 3; ++i) {
		ftraps[i]->attack("Phill");
	}
	std::cout << "<Methods done>" << std::endl;

	std::cout << std::endl << "<Destructors>" << std::endl;
	for (int i = 0; i < 3; ++i) {
		delete(ftraps[i]);
	}
	std::cout << "<Destructors done>" << std::endl << std::endl;

	return 0;
}