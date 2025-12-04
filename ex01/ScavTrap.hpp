/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:47:19 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 18:00:31 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
public:
    ScavTrap(void);
    ScavTrap(const std::string& nm);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap& other);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    void guardGate(void);

private:
    bool _guardMode;
};

#endif  // SCAVTRAP_HPP