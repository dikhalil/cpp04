/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:44:20 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 22:46:29 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

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