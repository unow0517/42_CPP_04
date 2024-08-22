/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:28:44 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 09:52:16 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain* brain;
	public:
	Dog();
	Dog(const Dog& otherDog);
	~Dog();
	
	Dog& operator=(const Dog& dog);
	
	std::string getType() const override;
	void makeSound() const override;
};	

#endif