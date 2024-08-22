/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:08:10 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:24:30 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Unknown Wrong")
{
	std::cout << "Object WrongAnimal constructed. type : " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Object WrongAnimal destructed. type : " << type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & WrongAnimal1)
{
	this->type = WrongAnimal1.type;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal & WrongAnimal1)
{
	this->type = WrongAnimal1.type;
	std::cout << "Wrong Animal was constructed from a copy\n";
}


std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
		std::cout << "Sound from unknown wronganimal..." << std::endl;

}