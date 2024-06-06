/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:55:03 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/05 21:25:31 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
    const Animal *animal = new Animal();
    const Animal *doggo = new Dog();
    const Animal *catto = new Cat();
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    animal->makeSound();
    doggo->makeSound();
    catto->makeSound();
    wrongAnimal->makeSound();
    wrongCat->makeSound();

    std::cout << std::endl;

    std::cout << "Type of animal: " << animal->getType() << std::endl;
    std::cout << "Type of doggo: " << doggo->getType() << std::endl;
    std::cout << "Type of catto: " << catto->getType() << std::endl;
    std::cout << "Type of wrongAnimal: " << wrongAnimal->getType() << std::endl;
    std::cout << "Type of wrongCat: " << wrongCat->getType() << std::endl;

    delete animal;
    delete doggo;
    delete catto;
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}