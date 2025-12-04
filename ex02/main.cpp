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

#include "FragTrap.hpp"
#include <iostream>

int main(void) {
	std::cout << "==== FragMike ====" << std::endl;
	FragTrap ft("FragMike");
	ft.attack("Phill");
	ft.highFivesGuys();
	ft.takeDamage(8);
	ft.takeDamage(1);
	ft.takeDamage(90);
	ft.takeDamage(2);


	return 0;
}