/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 20:46:21 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/11 18:44:58 by llupache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "\n========== EX02: ABSTRACT CLASS TESTS ==========" << std::endl;

	// THE MAIN TEST: UNCOMMENTING THESE LINES MUST CAUSE A COMPILATION ERROR!
	// Animal testAnimal;
	// const Animal* meta = new Animal();

	std::cout << "\n--- Creating Dog and Cat via Animal pointers (Polymorphism) ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n--- Testing Sounds ---" << std::endl;
	j->makeSound();
	i->makeSound();

	std::cout << "\n--- Memory Cleanup ---" << std::endl;
	delete j;
	delete i;

	std::cout << "\n========== EX02: ARRAY & DEEP COPY (Still works!) ==========" << std::endl;

	const Animal* zoo[4];
	for (int k = 0; k < 4; k++) {
		if (k % 2 == 0)
			zoo[k] = new Dog();
		else
			zoo[k] = new Cat();
	}
	for (int k = 0; k < 4; k++) {
		delete zoo[k];
	}

	std::cout << "\n========== END OF EX02 TESTS ==========\n" << std::endl;

	return 0;
}