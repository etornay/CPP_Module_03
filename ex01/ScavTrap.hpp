/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:34:54 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/27 19:58:04 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap:public ClapTrap

{
	private:

	public:
			ScavTrap(void);
			ScavTrap(std::string str);
			ScavTrap(const ScavTrap &copy);
			ScavTrap &operator = (const ScavTrap &other);
			void attack(const std::string& target);
			void guardGate(void);
			~ScavTrap(void);
};
#endif