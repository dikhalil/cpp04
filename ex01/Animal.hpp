/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:36:55 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 18:17:50 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
        Animal(std::string type);
    public:
        Animal(void);
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal(void);
        virtual void makeSound() const;
        std::string getType(void) const;
};

#endif