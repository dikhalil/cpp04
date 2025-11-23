/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:53 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 23:27:26 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    _brain = new Brain();
    std::cout << "Cat created!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete (_brain);
        _brain = new Brain(*other._brain);
    }
    return (*this);
}
Cat::~Cat(void)
{
    delete (_brain);
    std::cout << "Cat destroyed!" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow :3!" << std::endl;
}