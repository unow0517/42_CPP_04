/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:27:46 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 11:15:52 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
	protected: 
		std::string type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void) = 0;
		AAnimal(const AAnimal & anotehrAanimal);
		AAnimal& operator=(AAnimal const & rhs);
		virtual std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif