/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:37:05 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 23:24:51 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    // Anima a;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal *animals[4] = 
    {
        new Cat(),
        new Cat(),
        new Dog(),
        new Dog()
    };

    std::cout << j->getType() << " ";
    j->makeSound(); 
    std::cout << i->getType() << " ";    
    i->makeSound();
    for (int i = 0; i < 4; i++)
    {
        std::cout << animals[i]->getType() << " ";
        animals[i]->makeSound();
    } 
    delete(i);
    delete(j);
    for (int i = 0; i < 4; i++)
        delete (animals[i]);
    return (0);
}

