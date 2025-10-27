/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:35 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 16:11:30 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
  public:
	ClapTrap(const std::string nm);
	ClapTrap(const ClapTrap& other);
	~ClapTrap(void);
	ClapTrap& operator=(const ClapTrap& other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
  private:
	ClapTrap(void);
	std::string name;
	unsigned int hit_pts;
	unsigned int energie_pts;
	unsigned int attack_dmg;
};

#endif  // CLAPTRAP_HPP