/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:43:58 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 23:01:02 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "defualt";
    std::cout << "Brain created!" << std::endl;
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
    std::cout << "Brain destroyed!" << std::endl;
}