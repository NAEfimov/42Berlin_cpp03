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
	ClapTrap(void);
	ClapTrap(const std::string& nm);
	ClapTrap(const ClapTrap& other);
	virtual ~ClapTrap(void);
	ClapTrap& operator=(const ClapTrap& other);

	virtual void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

  protected:
	std::string		_name;
	unsigned int	_hit_pts;
	unsigned int	_energie_pts;
	unsigned int	_attack_dmg;
};

#endif  // CLAPTRAP_HPP