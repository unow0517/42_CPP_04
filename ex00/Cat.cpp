/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:32:57 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:24:58 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Object Cat is derived from Object Animal " << std::endl;
}

Cat::~Cat()
{
	std::cout << "Object Cat is destructed" << std::endl;
}
Cat::Cat(const Cat& otherCat)
{
	std::cout << "Object Cat is copy-constructed" << std::endl;
	this->type = otherCat.getType();
}

Cat& Cat::operator=(const Cat& anotherCat)
{
	std::cout << "=operator in Cat called" << std::endl;
	if (this != &anotherCat) 
		this->type = anotherCat.getType();
  	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW I AM A CAT" << std::endl;
}

std::string Cat::getType() const
{	
	return "Cat";	
}
