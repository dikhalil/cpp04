/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 23:32:17 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/31 01:48:52 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    _type = "";
    // std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
    // std::cout << "AMateria parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    // std::cout << "AMateria copy constructor called" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    // std::cout << "AMateria copy assignment operator called" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}

AMateria::~AMateria(void)
{
    // std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType(void) const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}