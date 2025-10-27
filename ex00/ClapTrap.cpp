/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:20:11 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 15:51:18 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) {}
ClapTrap::ClapTrap(const std::string nm) : name(nm) {}
ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
}
ClapTrap::~ClapTrap(void) {}
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	name = other.name;
	hit_pts = other.hit_pts;
	energie_pts = other.energie_pts;
	attack_dmg = other.attack_dmg;

	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (energie_pts <= 0) {
		std::cout  << "ClapTrap " << name << " has no energie!" << std::endl;
		return;
	}
	
	--energie_pts;
	std::cout << "ClapTrap " << name << " attacks " << target <<
				 ", causing " << attack_dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hit_pts - amount <= 0) {
		std::cout << "ClapTrap " << name << " takes " << hit_pts <<
					 " points of damage and dies!" << std::endl;
		hit_pts = 0;
		return;
	}
	
	hit_pts -= amount;
	std::cout << "ClapTrap " << name << " is attacked, taking " << amount <<
				 " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energie_pts <= 0) {
		std::cout  << "ClapTrap " << name << " has no energie!" << std::endl;
		return;
	}
	
	--energie_pts;
	std::cout << "ClapTrap " << name << " repairs itself, regaining " <<
				 amount << " hit points." << std::endl;
}
