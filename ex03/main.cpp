/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 23:31:22 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/31 16:09:48 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main(void)
{
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
    Character* diana = new Character("tester");
    AMateria* ice1 = new Ice();
    AMateria* ice2 = new Ice();
    AMateria* cure1 = new Cure();
    AMateria* cure2 = new Cure();
    AMateria* ice3 = new Ice();
    diana->equip(ice1);
    diana->equip(ice2);
    diana->equip(cure1);
    diana->equip(cure2);
    diana->equip(ice3); 
    for (int i = 0; i < 5; i++)
        diana->use(i, *bob); 
    AMateria* dropped = ice2;
    diana->unequip(1);
    diana->use(1, *bob);
    delete (dropped);
    delete (diana);
    delete (ice3);
    delete (bob);
    delete (me);
    delete (src);
    return (0);
}
