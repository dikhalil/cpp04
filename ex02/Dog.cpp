/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:37:00 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:40:38 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
    _brain = new Brain();
    std::cout << "Dog default constructor called!" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment called" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete (_brain);
        _brain = new Brain(*other._brain);
    }
    return (*this);
}

Dog::~Dog(void)
{
    delete (_brain);
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
