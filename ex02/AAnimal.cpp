/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:58 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:34:37 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
    std::cout << "AAnimal default constructor called!" << std::endl;
}
AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal parameterized constructor called!" << std::endl;
    std::cout << "Type set to: " << _type << std::endl;
}
AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
}
AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "AAnimal copy assignment called" << std::endl;
    return (*this);
}
AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called!" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (_type);
}