/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:34:25 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:42:35 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class AAnimal
{
protected:
    std::string type;

public:
    AAnimal();
    virtual ~AAnimal();

    virtual void makeSound() const;
    std::string getType() const;
    void setType(std::string type);
};

#endif