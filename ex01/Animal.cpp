/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:30:44 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:29:43 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void):type("Unknown")
{
	std::cout << "Object Animal constructed. type : " << type << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Object Animal destructed. type : " << type << std::endl;
}

Animal::Animal(Animal& anotherAnimal)
{
	this->type = anotherAnimal.type;
	std::cout << "Animal was constructed from a copy\n";
}

Animal & Animal::operator=(Animal const& anotherAnimal)
{
	this->type = anotherAnimal.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
		std::cout << "Sound from unknown animal..." << std::endl;

}

