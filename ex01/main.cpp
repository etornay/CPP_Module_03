/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:05:06 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/30 15:48:16 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap("ELIAS");
	ScavTrap	scav("LUNA");
	int			n;

	clap.attack("FOZZIE");
	scav.attack("FOZZIE");
	n = -5;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.takeDamage(n);
	n = 7;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		scav.takeDamage(n);
	n = 1;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.beRepaired(n);
	n = 1;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		scav.beRepaired(n);
	/* for (int i = 0; i < 10; i++)
	{
		clap.attack("FOZZIE");
		scav.attack("FOZZIE");
	} */
	n = 5;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.takeDamage(n);
	n = 5;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		scav.takeDamage(n);
	scav.guardGate();
	n = 3;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.takeDamage(n);
	n = 3;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		scav.takeDamage(n);
	n = 100;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.beRepaired(n);
	n = 100;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		scav.beRepaired(n);
}
