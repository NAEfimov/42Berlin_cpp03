/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:47:22 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 23:27:04 by nefimov          ###   ########.fr       */
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

// void FragTrap::attack(const std::string& target) {
// 	if (_hit_pts == 0) {
// 		std::cout << "  FragTrap " << _name << " is died!" << std::endl;
// 		return;
// 	}
// 	if (_energie_pts <= 0) {
// 		std::cout << "  FragTrap " << _name << " has no energie!" << std::endl;
// 		return;
// 	}
	
// 	--_energie_pts;
// 	std::cout << "  FragTrap " << _name << " attacks " << target
// 			  << ", causing " << _attack_dmg << " points of damage!"
// 			  << std::endl;
// }

// void FragTrap::takeDamage(unsigned int amount) {
// 	if (_hit_pts == 0) {
// 		std::cout << "  FragTrap " << _name << " is died!" << std::endl;
// 		return;
// 	}
// 	if (_hit_pts <= amount) {
// 		std::cout << "  FragTrap " << _name << " takes " << _hit_pts
// 				  << " points of damage and dies!" << std::endl;
// 		_hit_pts = 0;
// 		return;
// 	}
	
// 	_hit_pts -= amount;
// 	std::cout << "  FragTrap " << _name << " is attacked, taking " << amount
// 			  << " points of damage! "
// 			  << "And now has " << _hit_pts << " hit points. " << std::endl;
// }

// void FragTrap::beRepaired(unsigned int amount) {
// 	if (_hit_pts == 0) {
// 		std::cout << "  FragTrap " << _name << " is died!" << std::endl;
// 		return;
// 	}
// 	if (_energie_pts <= 0) {
// 		std::cout << "  FragTrap " << _name << " has no energie!"
// 				  << std::endl;
// 		return;
// 	}
	
// 	--_energie_pts;
// 	_hit_pts += amount;
// 	std::cout << "  FragTrap " << _name << " repairs itself, regaining "
// 			  << amount << " hit points. "
// 			  << "And now has " << _hit_pts << " hit points. " << std::endl;
// }

void FragTrap::highFivesGuys(void) {
    std::cout << "  \"High Five Guys!\" "
			  << "(FragTrap is waiting for a positive high-fives response)."
			  << std::endl;
}
