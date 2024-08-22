/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:25:01 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:25:11 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

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
