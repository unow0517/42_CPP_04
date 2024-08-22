/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:42:52 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 10:00:47 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Brainy brain";
	std::cout << "A brain has been constructed and filled with ideas\n";
}

Brain::~Brain(void)
{
	delete [] (this->ideas);
	std::cout << "A brain is destroyed\n";
}

Brain::Brain(const Brain& anotherBrain)
{
	std::string *anotherideas = anotherBrain.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = anotherideas[i] + " copied";
	std::cout << "A brain has been copy constructed and stole the other's ideas\n";
}

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas() const
{
	return (this->ideas);
}


