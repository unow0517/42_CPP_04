/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:07:22 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:24:36 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected: 
		std::string type;
	public:
		WrongAnimal(void);		
		virtual ~WrongAnimal(void);
		WrongAnimal& operator=(WrongAnimal const & WrongAnimal1);
		WrongAnimal(WrongAnimal & ref);
		
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif
