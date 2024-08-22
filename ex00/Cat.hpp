/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:28:44 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 08:28:24 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat(const Cat& otherCat);
	~Cat();
	
	Cat& operator=(const Cat& cat);

	std::string getType() const override;
	void makeSound() const override;
};	

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat& otherWrongCat);
	~WrongCat();
	
	WrongCat& operator=(const WrongCat& Wrongcat);

	std::string getType() const override;
	void makeSound() const override;
};	

#endif