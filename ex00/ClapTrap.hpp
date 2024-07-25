/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:51:42 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/25 19:16:27 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap

{
	private:
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