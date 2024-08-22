/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:32:57 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 09:57:59 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Object Cat is derived from Object Animal " << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
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

//WrongCat
WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Object WrongCat is derived from Object Animal " << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Object WrongCat is destructed" << std::endl;
}
WrongCat::WrongCat(const WrongCat& otherWrongCat)
{
	std::cout << "Object WrongCat is copy-constructed" << std::endl;
	this->type = otherWrongCat.getType();
}

WrongCat& WrongCat::operator=(const WrongCat& anotherWrongCat)
{
	std::cout << "=operator in WrongCat called" << std::endl;
	if (this != &anotherWrongCat) 
		this->type = anotherWrongCat.getType();
  	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "BOOOOO BOOOO I AM A WrongCAT" << std::endl;
}

std::string WrongCat::getType() const
{	
	return "WrongCat";	
}
