/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:58 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 14:57:33 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal Default constructor called!" << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal Parameterized constructor called!" << std::endl;
    std::cout << "Type set to: " << _type << std::endl;
}
Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}
Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "Animal copy assignment called" << std::endl;
    return (*this);
}
Animal::~Animal(void)
{
    std::cout << "Animal Destructor called!" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType(void) const
{
    return (_type);
}