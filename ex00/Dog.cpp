/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:37:00 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:03:33 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog Default constructor called!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    Animal::operator=(other);
    std::cout << "Dog copy assignment called" << std::endl;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
