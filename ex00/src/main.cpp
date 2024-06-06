/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:55:03 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:08:51 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>

int main()
{
    const Animal *animal = new Animal();
    const Animal *doggo = new Dog();
    const Animal *catto = new Cat();

    animal->makeSound(); // Will output the sound of the Animal class
    doggo->makeSound();  // Will output the sound of the Dog class
    catto->makeSound();  // Will output the sound of the Cat class

    std::cout << std::endl;

    std::cout << "Type of animal: " << animal->getType() << std::endl;
    std::cout << "Type of doggo: " << doggo->getType() << std::endl;
    std::cout << "Type of catto: " << catto->getType() << std::endl;

    delete animal;
    delete doggo;
    delete catto;

    return 0;
}