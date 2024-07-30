/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:44:32 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/30 14:57:06 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap:public ClapTrap

{
	private:

	public:
			FragTrap(void);
			FragTrap(std::string str);
			FragTrap(const FragTrap &copy);
			FragTrap &operator = (const FragTrap &other);
			void attack(const std::string& target);
			void highFiveGuys(void);
			~FragTrap(void);
};
#endif