/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:52:10 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/25 19:45:34 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player("ELIAS");

	player.attack("LUNA");
	player.takeDamage(7);
	player.beRepaired(1);
	for (int i = 0; i < 10; i++)
	{
		player.attack("LUNA");
	}
	player.takeDamage(5);
	player.takeDamage(3);
	player.beRepaired(100);
}