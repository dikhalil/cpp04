/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 00:02:57 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/31 16:07:18 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    // std::cout << "Character " << _name << " created!" << std::endl;
}

Character::Character(const Character &other)
{
    // std::cout << "Character copy constructor called" << std::endl;
    *this = other;
}

Character &Character::operator=(const Character &other)
{
    // std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete (_inventory[i]);
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete (_inventory[i]);
    }
    // std::cout << "Character " << _name << " destroyed!" << std::endl;
}

const std::string & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        return;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
        return;
    _inventory[idx]->use(target);
}