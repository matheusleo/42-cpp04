/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:34:25 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:22:19 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    virtual ~WrongAnimal();

    void makeSound() const;
    std::string getType() const;
    void setType(std::string type);
};

#endif