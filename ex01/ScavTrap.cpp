/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:34:52 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/30 15:57:57 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "ScavTrap: Attributes constructor called" << std::endl;
	name = str;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &other)
{
	if (this != &other)
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << std::endl << "ScavTrap: Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << std::endl << "ScavTrap " << name << " attacks " << target << " inflicting " << attackDamage << " points of damage." << std::endl;
		energyPoints--;
		std::cout << "· Energy points left: " << energyPoints << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << std::endl << "ScavTrap " << name << " has no hit points." << std::endl;
	else if (energyPoints <= 0)
		std::cout << std::endl << "ScavTrap " << name << " has no energy to attack." << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << std::endl << "ScavTrap " << name << " is in gate keeper mode." << std::endl;
		energyPoints--;
		std::cout << "· Hit points left: " << hitPoints << std::endl;
		std::cout << "· Energy points left: " << energyPoints << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << std::endl << "ScavTrap " << name << " is dead." << std::endl;
	else if (energyPoints <= 0)
		std::cout << std::endl << "ScavTrap " << name << " has no energy to recover himself." << std::endl;
}
