/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:47:19 by nefimov           #+#    #+#             */
/*   Updated: 2025/12/15 10:39:38 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap(void);
    FragTrap(const std::string& nm);
    FragTrap(const FragTrap& other);
    ~FragTrap();
    FragTrap& operator=(const FragTrap& other);

    void highFivesGuys(void);
};

#endif  // FRAGTRAP_HPP