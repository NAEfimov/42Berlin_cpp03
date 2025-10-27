/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:35 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 15:19:22 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap& other);
	~ClapTrap(void);
	ClapTrap& operator=(const ClapTrap& other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
private:
	std::string name;
	int hit_pts = 10;
	int energie_pts = 10;
	int attack_dmg = 0;
};

#endif  // CLAPTRAP_HPP