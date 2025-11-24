/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 23:31:22 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 17:19:13 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
    {
        std::cout << "\n=== Subject Test ===\n";
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob;
        delete me;
        delete src;
    }

    {
        std::cout << "\n=== Test 2: MateriaSource Full ===\n";
        IMateriaSource* src2 = new MateriaSource();
        AMateria* ice1 = new Ice();
        AMateria* cure1 = new Cure();
        AMateria* ice2 = new Ice();
        AMateria* cure2 = new Cure();
        AMateria* ice3 = new Ice();
        
        src2->learnMateria(ice1);
        src2->learnMateria(cure1);
        src2->learnMateria(ice2);
        src2->learnMateria(cure2);
        src2->learnMateria(ice3);
        
        delete src2;
    }

    {
        std::cout << "\n=== Test 3: Character Full Inventory ===\n";
        IMateriaSource* src3 = new MateriaSource();
        src3->learnMateria(new Ice());
        src3->learnMateria(new Cure());
        
        ICharacter* alice = new Character("alice");
        ICharacter* target = new Character("target");
        
        for (int i = 0; i < 4; i++)
        {
            AMateria* materia = (i % 2 == 0) ? src3->createMateria("ice") : src3->createMateria("cure");
            alice->equip(materia);
        }
        
        AMateria* overflow = src3->createMateria("ice");
        alice->equip(overflow);
        delete overflow;
        
        for (int i = 0; i < 5; i++)
            alice->use(i, *target);
        
        delete target;
        delete alice;
        delete src3;
    }

    {
        std::cout << "\n=== Test 4: Unequip and Memory Management ===\n";
        IMateriaSource* src4 = new MateriaSource();
        src4->learnMateria(new Ice());
        
        ICharacter* player = new Character("player");
        ICharacter* enemy = new Character("enemy");
        
        AMateria* ice = src4->createMateria("ice");
        player->equip(ice);
        player->use(0, *enemy);
        
        player->unequip(0);
        player->use(0, *enemy);
        
        delete ice;
        delete enemy;
        delete player;
        delete src4;
    }

    {
        std::cout << "\n=== Test 5: Unknown Materia Type ===\n";
        IMateriaSource* src5 = new MateriaSource();
        src5->learnMateria(new Ice());
        
        AMateria* unknown = src5->createMateria("fire");
        if (!unknown)
            std::cout << "Fire materia doesn't exist" << std::endl;
        
        delete src5;
    }

    {
        std::cout << "\n=== Test 6: Copy Character ===\n";
        Character original("original");
        original.equip(new Ice());
        original.equip(new Cure());
        
        Character copy(original);
        ICharacter* test = new Character("test");
        
        std::cout << "Original uses:" << std::endl;
        original.use(0, *test);
        original.use(1, *test);
        
        std::cout << "Copy uses:" << std::endl;
        copy.use(0, *test);
        copy.use(1, *test);
        
        delete test;
    }

    return (0);
}
