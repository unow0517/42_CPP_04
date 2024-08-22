/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:30:44 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:06:11 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal():type("Unknown")
{
	std::cout << "Object Animal constructed. type : " << type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Object Animal destructed. type : " << type << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
		std::cout << "Sound from unknown animal..." << std::endl;

}

WrongAnimal::WrongAnimal():type("Unknown Wrong")
{
	std::cout << "Object WrongAnimal constructed. type : " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Object WrongAnimal destructed. type : " << type << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
		std::cout << "Sound from unknown wronganimal..." << std::endl;

}