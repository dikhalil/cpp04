/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:44:20 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/24 15:40:18 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
    public:
        std::string ideas[100];
        Brain(void);
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain(void);
};

#endif