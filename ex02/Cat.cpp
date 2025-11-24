/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:53 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:40:22 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
    _brain = new Brain();
    std::cout << "Cat default constructor called!" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment called" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete (_brain);
        _brain = new Brain(*other._brain);
    }
    return (*this);
}
Cat::~Cat(void)
{
    delete (_brain);
    std::cout << "Cat destructor called!" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}