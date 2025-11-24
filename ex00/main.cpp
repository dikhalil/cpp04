/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:37:05 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:09:25 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "\n=== Basic Polymorphism ===\n";
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << dog->getType() << " says: ";
    dog->makeSound();
    std::cout << cat->getType() << " says: ";
    cat->makeSound();
    std::cout << "Animal says: ";
    meta->makeSound();

    std::cout << "\n=== Array of Animals ===\n";
    const Animal *animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};
    for (int i = 0; i < 4; i++)
    {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    std::cout << "\n=== Wrong Animal (No Virtual) ===\n";
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << " says: ";
    wrongCat->makeSound();

    std::cout << "\n=== Cleanup ===\n";
    delete meta;
    delete dog;
    delete cat;
    for (int i = 0; i < 4; i++)
        delete animals[i];
    delete wrongCat;

    return (0);
}

