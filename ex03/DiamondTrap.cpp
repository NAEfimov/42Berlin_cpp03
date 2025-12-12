/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 22:53:53 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/12 23:51:57 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap* DiamondTrap::instance = NULL;

DiamondTrap* DiamondTrap::getInstance(std::string const name) {
	if (instance == NULL) {
		instance = new DiamondTrap(name);
		std::cout << "DiamondTrap instance created" << std::endl;
	}
	return (instance);
}

void DiamondTrap::destroyInstance() {
	if (instance != NULL) {
		delete instance;
		instance = NULL;
		std::cout << "DiamondTrap instance destroyed" << std::endl;
	}
}

DiamondTrap::DiamondTrap(std::string const name) 
	: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap constructor called" << std::endl;
	_name = name;
	_hit_pts = FragTrap::_hit_pts;
	_energie_pts = ScavTrap::_energie_pts;
	_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}