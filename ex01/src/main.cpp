/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:55:03 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:42:35 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
    const AAnimal *animals[4];

    std::cout << "POPULATING ANIMALS:" << std::endl;
    std::cout << "CREATING DOGS" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Dog();
    }
    std::cout << "DOGS CREATED" << std::endl;
    std::cout << "CREATING CATS" << std::endl;
    for (int i = 2; i < 4; i++)
    {
        animals[i] = new Cat();
    }
    std::cout << "CATS CREATED" << std::endl;
    std::cout << "ANIMALS POPULATED" << std::endl;

    std::cout << "DELETING ANIMALS:" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
    std::cout << "ANIMALS DELETED" << std::endl;
    return 0;
}