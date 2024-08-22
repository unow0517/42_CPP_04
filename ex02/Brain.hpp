/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:38:45 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/22 09:50:01 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	*ideas;
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain & anotherBrain);
		Brain & operator=(Brain const & rhs);
		std::string *getIdeas() const;

};

#endif