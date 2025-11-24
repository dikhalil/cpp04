/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:37:05 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:42:46 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "\n=== Basic Polymorphism ===\n";
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << j->getType() << " says: ";
    j->makeSound(); 
    std::cout << i->getType() << " says: ";    
    i->makeSound();

    std::cout << "\n=== Array of Animals ===\n";
    const AAnimal *animals[4] = 
    {
        new Cat(),
        new Cat(),
        new Dog(),
        new Dog()
    };

    for (int idx = 0; idx < 4; idx++)
    {
        std::cout << animals[idx]->getType() << " says: ";
        animals[idx]->makeSound();
    }

    std::cout << "\n=== Cleanup ===\n";
    delete i;
    delete j;
    for (int idx = 0; idx < 4; idx++)
        delete animals[idx];

    return (0);
}

