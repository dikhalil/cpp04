/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:53 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:01:11 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat Default constructor called!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
    Animal::operator=(other);
    std::cout << "Cat copy assignment called" << std::endl;
    return (*this);
}
Cat::~Cat(void)
{
    std::cout << "Cat Destructor called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}