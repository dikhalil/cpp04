/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 23:49:49 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/31 00:35:54 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    protected:
        std::string _type;
    public:
        Ice(void);
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
        virtual ~Ice(void);
        AMateria* clone(void) const;
        void use(ICharacter& target);
};

#endif