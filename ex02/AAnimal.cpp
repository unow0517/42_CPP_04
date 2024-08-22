/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:30:44 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 11:21:27 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():type("Unknown")
{
	std::cout << "Object AAnimal constructed. type : " << type << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Object AAnimal destructed. type : " << type << std::endl;
}

AAnimal::AAnimal(AAnimal const & anotehrAanimal)
{
	this->type = anotehrAanimal.getType();
	std::cout << "AAnimal was constructed from a copy\n";
}

AAnimal& AAnimal::operator=(AAnimal const & anotherAanimal)
{
	this->type = anotherAanimal.getType();
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

void AAnimal::makeSound(void) const
{
		std::cout << "Sound from unknown Aanimal..." << std::endl;

}