/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:37:53 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 09:59:53 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	const Animal* j = new Dog();
	std::cout << " " << std::endl;
	const Animal* i = new Cat();
	std::cout << " " << std::endl;
	
	delete j;//should not create a leak delete i;
	std::cout << " " << std::endl;

	delete i;
	
	system("leaks ex01");
	return 0; 

}