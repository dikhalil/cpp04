/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:37:05 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 19:11:29 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal *animals[2] = 
    {
        new Cat(),
        new Dog()
    };
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    j->makeSound(); 
    std::cout << i->getType() << " " << std::endl;    
    i->makeSound();
    for (int i = 0; i < 2; i++)
    {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    } 
    meta->makeSound();
    std::cout << wrongCat->getType() << std::endl;
    wrongCat->makeSound();
    delete(i);
    delete(j);
    delete (meta);

    for (int i = 0; i < 2; i++)
        delete (animals[i]);
    delete (wrongCat);
    return (0);
}

