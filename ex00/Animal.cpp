/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:58 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 18:19:00 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal created!" << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << type << " created!" << std::endl;
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
    std::cout << "Animal " << _type << " destroyed!" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal " << _type << " sound!" << std::endl;
}

std::string Animal::getType(void) const
{
    return (_type);
}