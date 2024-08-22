/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:27:46 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:48:31 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected: 
		std::string type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal& anotherAnimal);
		Animal& operator=(Animal const& anotherAnimal);
		
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
