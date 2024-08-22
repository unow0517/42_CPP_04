/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:37:53 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 11:20:35 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak delete i;
	delete i;

	system("leaks ex02");

	std::cout << "-----Test From Pdf Done-----" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "-----Create Animal Objects-----" << std::endl;
	std::cout << " " << std::endl;

	const AAnimal *(array[4]);
	
	for (int i = 0; i < 2; i++)
		array[i] = new Dog();
	array[2] = new Cat();
	array[3] = new Cat();
	
	for (int i = 0; i < 4; i++)
		delete array[i];
	std::cout << std::endl;
	std::cout << "-----Create Animal Objects Done-----" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "-----Deep Copy Test-----" << std::endl;
	std::cout << std::endl;

	Dog dogA;
	Cat catA;

	Dog CopydogA;
	Cat CopycatA;
	
	CopydogA = dogA;
	CopycatA = catA;
	std::cout << " " << std::endl;

	dogA.compareObject(CopydogA);
	catA.compareObject(CopycatA);
	// contents are same and addresses are different after deep copy.
	std::cout << "-----Deep Copy Test Done-----" << std::endl;
	std::cout << std::endl;
	 
	system("leaks ex02");


	return 0; 

}