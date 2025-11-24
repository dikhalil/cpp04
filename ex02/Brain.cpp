/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:43:58 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:35:05 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "defualt";
    std::cout << "Brain default constructor called!" << std::endl;
}
Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;        
}
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain copy assignment called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return (*this);   
}
Brain::~Brain(void)
{
    std::cout << "Brain destructor called!" << std::endl;
}