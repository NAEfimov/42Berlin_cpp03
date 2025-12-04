/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:20:11 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 16:25:20 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name(""), _hit_pts(10), _energie_pts(10), _attack_dmg(0) {
	std::cout << "Default Constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string& nm) : _name(nm), _hit_pts(10), _energie_pts(10), _attack_dmg(0) {
	std::cout << "Constructor with name called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy Assignment Operator called" << std::endl;
	
	_name = other._name;
	_hit_pts = other._hit_pts;
	_energie_pts = other._energie_pts;
	_attack_dmg = other._attack_dmg;

	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_hit_pts == 0) {
		std::cout << " ClapTrap " << _name << " is died!" << std::endl;
		return;
	}
	if (_energie_pts <= 0) {
		std::cout  << " ClapTrap " << _name << " has no energie!" << std::endl;
		return;
	}
	
	--_energie_pts;
	std::cout << " ClapTrap " << _name << " attacks " << target <<
				 ", causing " << _attack_dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_pts == 0) {
		std::cout << " ClapTrap " << _name << " is died!" << std::endl;
		return;
	}
	if (_hit_pts <= amount) {
		std::cout << " ClapTrap " << _name << " takes " << _hit_pts <<
					 " points of damage and dies!" << std::endl;
		_hit_pts = 0;
		return;
	}
	
	_hit_pts -= amount;
	std::cout << " ClapTrap " << _name << " is attacked, taking " << amount <<
				 " points of damage! " <<
				 "And now has " << _hit_pts << " hit points. " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hit_pts == 0) {
		std::cout << " ClapTrap " << _name << " is died!" << std::endl;
		return;
	}
	if (_energie_pts <= 0) {
		std::cout  << " ClapTrap " << _name << " has no energie!" << std::endl;
		return;
	}
	
	--_energie_pts;
	_hit_pts += amount;
	std::cout << " ClapTrap " << _name << " repairs itself, regaining " <<
				 amount << " hit points. " <<
				 "And now has " << _hit_pts << " hit points. " << std::endl;
}
