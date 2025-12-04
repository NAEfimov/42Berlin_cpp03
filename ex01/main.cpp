/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:19:59 by nefimov           #+#    #+#             */
/*   Updated: 2025/10/27 16:25:53 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
	std::cout << "==== ScavMike ====" << std::endl;
	ScavTrap st("ScavMike");
	st.attack("Phill");
	st.guardGate();
	st.takeDamage(8);
	st.takeDamage(1);
	st.takeDamage(90);
	st.takeDamage(2);


	return 0;
}