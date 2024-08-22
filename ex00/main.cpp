/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:37:53 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 08:35:50 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout <<  " " << std::endl; 

	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound(); 

	std::cout <<  " " << std::endl; 

	//wrongs
	const WrongAnimal* wrongmeta = new WrongAnimal(); 
	const WrongAnimal* wrongi = new WrongCat();

	std::cout << wrongi->getType() << " " << std::endl; 
	wrongmeta->makeSound();
	wrongi->makeSound();

	std::cout <<  " " << std::endl; 
	
	delete meta;
	delete j;
	delete i;
	delete wrongi;
	
	return 0; 
}