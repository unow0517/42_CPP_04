/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:27:46 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:06:28 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
	protected: 
		std::string type;
	public:
		AAnimal(void);
		// AAnimal(std::string type_input);
		
		virtual ~AAnimal(void);
		
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
};

class WrongAAnimal
{
	protected: 
		std::string type;
	public:
		WrongAAnimal(void);
		// AAnimal(std::string type_input);
		
		virtual ~WrongAAnimal(void);
		
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif