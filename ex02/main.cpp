/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:43:02 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/30 15:47:55 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap("ELIAS");
	ScavTrap	scav("LUNA");
	FragTrap	frag("SELENE");
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
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		frag.takeDamage(n);
	/* n = 1;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.beRepaired(n);
	n = 1;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		scav.beRepaired(n);
	n = 1;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		frag.beRepaired(n); */
	/* for (int i = 0; i < 10; i++)
	{
		clap.attack("FOZZIE");
		scav.attack("FOZZIE");
		frag.attack("FOZZIE");
	} */
	/* n = 5;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.takeDamage(n);
	n = 5;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		scav.takeDamage(n);
	n = 5;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		frag.takeDamage(n); */
	scav.guardGate();
	frag.highFiveGuys();
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
	n = 3;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		frag.takeDamage(n);
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
	n = 100;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		frag.beRepaired(n);
}
