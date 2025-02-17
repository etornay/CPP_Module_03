/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:52:10 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/29 18:37:00 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap("ELIAS");
	int			n;
	
	clap.attack("LUNA");
	n = -5;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.takeDamage(n);
	n = 1;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.beRepaired(n);
	for (int i = 0; i < 10; i++)
	{
		clap.attack("LUNA");
	}
	n = 5;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.takeDamage(n);
	n = 1;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.takeDamage(n);
	n = 3;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.takeDamage(n);
	n = 100;
	if (n <= 0)
		std::cout << std::endl << "Can't receive or repair negative or null damage, LOL." << std::endl;
	else
		clap.beRepaired(n);
}
