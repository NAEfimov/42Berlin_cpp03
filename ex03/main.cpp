/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:19:59 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 23:57:00 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int main(void) {
	std::cout << "==== DiamondMike ====" << std::endl;
	std::string name = "DiamondMike";
	DiamondTrap* dt = DiamondTrap::getInstance(name);

	dt->attack("Phill");
	dt->highFivesGuys();
	dt->takeDamage(8);
	dt->takeDamage(1);
	dt->takeDamage(90);
	dt->beRepaired(1);
	dt->takeDamage(2);
	dt->whoAmI();
	dt->destroyInstance();

	return 0;
}