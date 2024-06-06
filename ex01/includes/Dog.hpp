/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:39:13 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:42:35 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public AAnimal
{
private:
    Brain *brain;

public:
    Dog();
    ~Dog();

    void makeSound() const;
};

#endif