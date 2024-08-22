/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:32:57 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 11:04:58 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Object DOG is derived from Object Animal " << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Object DOG is destructed" << std::endl;
}

Dog::Dog(const Dog& otherDog)
{
	std::cout << "Object DOG is copy-constructed" << std::endl;
	this->type = otherDog.getType();
}

Dog& Dog::operator=(const Dog& anotherDog)
{
	std::cout << "=operator in DOG called" << std::endl;
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

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}

void Dog::compareObject(const Dog& anotherDog)
{
	std::cout << "my brain address:" << (this->brain) << std::endl;
	std::cout << "another brain address:" << (anotherDog.getBrain()) << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t|\t" << ((anotherDog.getBrain())->getIdeas())[i] << std::endl;
	std::cout << " " << std::endl;
	
	
}
