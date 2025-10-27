/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:19:59 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 16:25:53 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
	std::cout << "==== Charlie ====" << std::endl;
	ClapTrap cp("Charlie");
	cp.attack("Phill");	
	cp.takeDamage(8);
	cp.takeDamage(1);
	cp.takeDamage(1);
	cp.takeDamage(10);

	std::cout << std::endl << "==== Weacky ====" << std::endl;
	cp = ClapTrap("Weacky");
	cp.attack("Phill");
	for (int i = 0; i < 11; ++i) {
		cp.beRepaired(1);
	}
	cp.attack("Phill");
	cp.takeDamage(18);
	cp.takeDamage(2);
	cp.beRepaired(1);
	cp.takeDamage(1);

	return 0;
}