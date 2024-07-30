/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:24:09 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/30 14:24:13 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap

{
	protected:
			std::string name;
			int	hitPoints;
			int	energyPoints;
			int	attackDamage;

	public:
			ClapTrap(void);
			ClapTrap(std::string str);
			ClapTrap(const ClapTrap &copy);
			ClapTrap &operator = (const ClapTrap &other);
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			~ClapTrap(void);
};
#endif