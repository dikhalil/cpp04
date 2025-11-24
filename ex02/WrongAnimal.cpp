/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:58 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:36:38 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called!" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal parameterized constructor called!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "WrongAnimal copy assignment called" << std::endl;
    return (*this);
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called!" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (_type);
}