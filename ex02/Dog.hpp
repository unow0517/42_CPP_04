/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:28:44 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 11:22:46 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
	Brain *getBrain( void ) const;
	void compareObject(const Dog& anotherDog);
};	

#endif