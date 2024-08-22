/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:32:57 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 09:58:00 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Object Dog is derived from Object Animal " << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Object Dog is destructed" << std::endl;
}

Dog::Dog(const Dog& otherDog)
{
	std::cout << "Object Dog is copy-constructed" << std::endl;
	this->type = otherDog.getType();
}

Dog& Dog::operator=(const Dog& anotherDog)
{
	std::cout << "=operator in Dog called" << std::endl;
	if (this != &anotherDog) 
		this->type = anotherDog.getType();
  	return *this;
}

void Dog::makeSound() const
{
	std::cout << "BARK BARK I AM A DOG" << std::endl;
}

std::string Dog::getType() const
{	
	return "Dog";	
}
