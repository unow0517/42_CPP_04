/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:32:57 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 11:21:47 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal()
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

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}

void Cat::compareObject(const Cat& anotherCat)
{
	std::cout << "my brain address:" << (this->brain) << std::endl;
	std::cout << "another brain address:" << (anotherCat.getBrain()) << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t|\t" << ((anotherCat.getBrain())->getIdeas())[i] << std::endl;
	std::cout << " " << std::endl;
}
