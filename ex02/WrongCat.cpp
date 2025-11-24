/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:53 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:38:06 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called!" << std::endl;
    _brain = new Brain();
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        delete (_brain);
        _brain = new Brain(*other._brain);
    }
    std::cout << "WrongCat copy assignment called" << std::endl;
    return (*this);
}
WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called!" << std::endl;
    delete (_brain);
}
void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}