/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:22:19 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/30 16:01:10 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	std::cout << "FragTrap: Attributes constructor called" << std::endl;
	name = str;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
}

FragTrap &FragTrap::operator = (const FragTrap &other)
{
	if (this != &other)
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << std::endl << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << std::endl << "FragTrap " << name << " attacks " << target << " inflicting " << attackDamage << " points of damage." << std::endl;
		energyPoints--;
		std::cout << "· Energy points left: " << energyPoints << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << std::endl << "FragTrap " << name << " has no hit points." << std::endl;
	else if (energyPoints <= 0)
		std::cout << std::endl << "FragTrap " << name << " has no energy to attack." << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << std::endl << "FragTrap " << name << " wants to high five with everyone! :D" << std::endl;
		energyPoints--;
		std::cout << "· Hit points left: " << hitPoints << std::endl;
		std::cout << "· Energy points left: " << energyPoints << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << std::endl << "FragTrap " << name << " is dead." << std::endl;
	else if (energyPoints <= 0)
		std::cout << std::endl << "FragTrap " << name << " has no energy to high five... :C" << std::endl;
}
