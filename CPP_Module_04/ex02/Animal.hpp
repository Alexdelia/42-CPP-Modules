/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:14:18 by adelille          #+#    #+#             */
/*   Updated: 2021/12/19 18:59:39 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <typeinfo>

# include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		//Animal(const std::string &type);
		Animal(const Animal &src);
		virtual ~Animal(void);
		
		Animal & operator=(const Animal &rhs);

		virtual void	makeSound(void) const;
		
		std::string	getType(void) const;
		void		setType(const std::string &type);

	protected:
		std::string	_type;
};

std::ostream &operator<<(std::ostream &o, Animal const &src);

#endif