/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:51:35 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/25 19:32:10 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "Attributes constructor called" << std::endl;
	name = str;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	if (this != &other)
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << std::endl << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << std::endl << "ClapTrap " << name << " attacks " << target << " inflicting " << attackDamage << " points of damage." << std::endl;
		energyPoints--;
		std::cout << "· Energy points left: " << energyPoints << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << std::endl << "ClapTrap " << name << " has no hit points." << std::endl;
	else if (energyPoints <= 0)
		std::cout << std::endl << "ClapTrap " << name << " has no energy to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		std::cout << std::endl << "ClapTrap " << name << " received " << amount << " points of damage." << std::endl;
		hitPoints = (hitPoints - amount);
		if (hitPoints > 0)
			std::cout << "· Hit points left: " << hitPoints << std::endl;
		else
		{
			std::cout << "· Hit points left: 0" << std::endl;
			std::cout << std::endl << "ClapTrap " << name << " has no hit points. ClapTrap " << name << " has been defeated." << std::endl;
		}
	}
	else
		std::cout << std::endl << "ClapTrap " << name << " is dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << std::endl << "ClapTrap " << name << " recovered " << amount << " hit points." << std::endl;
		hitPoints = (hitPoints + amount);
		energyPoints = (energyPoints - amount);
		std::cout << "· Hit points left: " << hitPoints << std::endl;
		std::cout << "· Energy points left: " << energyPoints << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << std::endl << "ClapTrap " << name << " is dead." << std::endl;
	else if (energyPoints <= 0)
		std::cout << std::endl << "ClapTrap " << name << " has no energy to recover himself." << std::endl;
}
