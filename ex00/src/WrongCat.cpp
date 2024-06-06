/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:52:52 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:24:45 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat()
{
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound() const
{
    std::cout << this->type << ": Meow!" << std::endl;
}