/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:47:22 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 17:47:23 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "iostream"

ScavTrap::ScavTrap(void) : ClapTrap() {
    _hit_pts = 100;
    _energie_pts = 50;
    _attack_dmg = 20;
    _guardMode = false;
	std::cout << " ScavTrap default Constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string& nm) : ClapTrap(nm) {
    _hit_pts = 100;
    _energie_pts = 50;
    _attack_dmg = 20;
    _guardMode = false;
	std::cout << " ScavTrap constructor with name called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    _guardMode = other._guardMode;
	std::cout << " ScavTrap copy Constructor called" << std::endl;
}
ScavTrap::~ScavTrap(void) {
	std::cout << " ScavTrap destructor called" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << " ScavTrap copy Assignment Operator called" << std::endl;
	
	ClapTrap::operator=(other);
    _guardMode = other._guardMode;

	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (_hit_pts == 0) {
		std::cout << "  ScavTrap " << _name << " is died!" << std::endl;
		return;
	}
	if (_energie_pts <= 0) {
		std::cout << "  ScavTrap " << _name << " has no energie!"
				  << std::endl;
		return;
	}
	
	--_energie_pts;
	std::cout << "  ScavTrap " << _name << " attacks " << target
			  << ", causing " << _attack_dmg << " points of damage!"
			  << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (_hit_pts == 0) {
		std::cout << "  ScavTrap " << _name << " is died!" << std::endl;
		return;
	}
	if (_hit_pts <= amount) {
		std::cout << "  ScavTrap " << _name << " takes " << _hit_pts
				  << " points of damage and dies!" << std::endl;
		_hit_pts = 0;
		return;
	}

	_hit_pts -= amount;
	std::cout << "  ScavTrap " << _name << " is attacked, taking " << amount
			  << " points of damage! "
			  << "And now has " << _hit_pts << " hit points. " << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (_hit_pts == 0) {
		std::cout << "  ScavTrap " << _name << " is died!" << std::endl;
		return;
	}
	if (_energie_pts <= 0) {
		std::cout << "  ScavTrap " << _name << " has no energie!"
				  << std::endl;
		return;
	}

	--_energie_pts;
	_hit_pts += amount;
	std::cout << "  ScavTrap " << _name << " repairs itself, regaining "
			  << amount << " hit points. " << "And now has " << _hit_pts
			  << " hit points. " << std::endl;
}

void ScavTrap::guardGate(void) {
    _guardMode = true;
    std::cout  << "  ScavTrap is now in Gate keeper mode" << std::endl;
}