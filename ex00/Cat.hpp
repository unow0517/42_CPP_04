/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:13:02 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:27:28 by yowoo            ###   ########.fr       */
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

#endif