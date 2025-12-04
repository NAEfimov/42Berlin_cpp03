/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:47:19 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 18:00:31 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap {
public:
    FragTrap(void);
    FragTrap(const std::string& nm);
    FragTrap(const FragTrap& other);
    ~FragTrap();
    FragTrap& operator=(const FragTrap& other);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    void highFivesGuys(void);
};

#endif  // FRAGTRAP_HPP