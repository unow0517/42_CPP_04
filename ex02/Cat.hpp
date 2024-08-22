/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:28:44 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 11:22:43 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
	Brain* brain;
	
	public:
	Cat();
	Cat(const Cat& otherCat);
	~Cat();
	Cat& operator=(const Cat& cat);

	std::string getType() const override;
	void makeSound() const override;
	Brain *getBrain( void ) const;
	void compareObject(const Cat& anotherCat);
};	

#endif