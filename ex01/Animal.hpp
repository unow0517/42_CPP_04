/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:27:46 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 09:44:52 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected: 
		std::string type;
	public:
		Animal(void);
		// Animal(std::string type_input);
		
		virtual ~Animal(void);
		
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
};

class WrongAnimal
{
	protected: 
		std::string type;
	public:
		WrongAnimal(void);
		// Animal(std::string type_input);
		
		virtual ~WrongAnimal(void);
		
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif