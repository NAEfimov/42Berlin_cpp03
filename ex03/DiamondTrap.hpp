/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 22:45:12 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/15 10:49:34 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap {
  public:
	static DiamondTrap* getInstance(std::string const name);
	static void destroyInstance();
	~DiamondTrap();
	
	void attack(const std::string& target);
	void whoAmI();

  private:
	DiamondTrap();
	DiamondTrap(std::string const name);
	DiamondTrap(const DiamondTrap&);
	DiamondTrap& operator=(const DiamondTrap&);
  
  	static DiamondTrap* instance;
	std::string	_name;
};

#endif  // DIAMONDTRAP_HPP