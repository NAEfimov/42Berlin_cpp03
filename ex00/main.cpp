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
	ClapTrap ct;
	ct = ClapTrap("Charlie");
	ct.attack("Phill");	
	ct.takeDamage(8);
	ct.takeDamage(1);
	ct.takeDamage(1);
	ct.takeDamage(10);

	std::cout << std::endl << "==== Weacky ====" << std::endl;
	ct = ClapTrap("Weacky");
	ct.attack("Phill");
	for (int i = 0; i < 11; ++i) {
		ct.beRepaired(1);
	}
	ct.attack("Phill");
	ct.takeDamage(18);
	ct.takeDamage(2);
	ct.beRepaired(1);
	ct.takeDamage(1);

	return 0;
}