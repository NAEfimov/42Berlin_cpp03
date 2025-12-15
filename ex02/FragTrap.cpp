/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:47:22 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/15 10:35:46 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "iostream"

FragTrap::FragTrap(void) : ClapTrap() {
    _hit_pts = 100;
    _energie_pts = 100;
    _attack_dmg = 30;
	std::cout << " FragTrap default Constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string& nm) : ClapTrap(nm) {
    _hit_pts = 100;
    _energie_pts = 100;
    _attack_dmg = 30;
	std::cout << " FragTrap constructor with name called" << std::endl;
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << " FragTrap copy Constructor called" << std::endl;
}
FragTrap::~FragTrap(void) {
	std::cout << " FragTrap destructor called" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << " FragTrap copy Assignment Operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "  \"High Five Guys!\" "
			  << "(FragTrap is waiting for a positive high-fives response)."
			  << std::endl;
}
