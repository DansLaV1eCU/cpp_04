/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 20:46:21 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/11 18:19:14 by llupache         ###   ########.fr       */
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
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\n========== WRONG ANIMAL TESTS ==========" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat(); 

    std::cout << "\n--- Types ---" << std::endl;
    std::cout << "wrongCat is a: " << wrongCat->getType() << std::endl;
    
    std::cout << "\n--- Sounds ---" << std::endl;
    wrongMeta->makeSound();
    wrongCat->makeSound(); 

    std::cout << "\n========== ADDITIONAL TESTS (Stack) ==========" << std::endl;
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