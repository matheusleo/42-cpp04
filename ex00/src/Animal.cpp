/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:51:14 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:22:41 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() : type("Animal")
{
}

Animal::~Animal()
{
}

void Animal::makeSound() const
{
    std::cout << this->type << ": [Strange animal sounds]" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}
