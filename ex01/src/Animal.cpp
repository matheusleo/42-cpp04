/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:51:14 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:42:35 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

AAnimal::AAnimal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << this->type << ": [Strange animal sounds]" << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}
