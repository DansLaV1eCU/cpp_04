/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 20:46:21 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/01 20:46:54 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "\n========== SUBJECT TESTS ==========" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n--- Types ---" << std::endl;
    std::cout << "j is a: " << j->getType() << std::endl;
    std::cout << "i is a: " << i->getType() << std::endl;
    
    std::cout << "\n--- Sounds ---" << std::endl;
    i->makeSound(); // Should output the cat sound!
    j->makeSound(); // Should output the dog sound!
    meta->makeSound(); // Base animal sound

    std::cout << "\n========== WRONG ANIMAL TESTS ==========" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    // Create a WrongCat but hide it under a WrongAnimal pointer
    const WrongAnimal* wrongCat = new WrongCat(); 

    std::cout << "\n--- Types ---" << std::endl;
    std::cout << "wrongCat is a: " << wrongCat->getType() << std::endl;
    
    std::cout << "\n--- Sounds ---" << std::endl;
    wrongMeta->makeSound();
    // THE MAIN TEST: This should output the WrongAnimal sound, NOT the WrongCat sound,
    // because makeSound() in WrongAnimal is NOT virtual!
    wrongCat->makeSound(); 

    std::cout << "\n========== ADDITIONAL TESTS (Stack) ==========" << std::endl;
    // Show that WrongCat can actually meow if called directly, not through a base pointer
    WrongCat realWrongCat;
    realWrongCat.makeSound(); 
    
    Dog stackDog;
    stackDog.makeSound();

    std::cout << "\n========== MEMORY CLEANUP ==========" << std::endl;
	
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongCat;

    std::cout << "\n========== END OF TESTS ==========\n" << std::endl;

    return 0;
}