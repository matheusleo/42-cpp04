/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:39:13 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:42:35 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public AAnimal
{
private:
    Brain *brain;

public:
    Cat();
    ~Cat();

    void makeSound() const;
};

#endif