/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 20:46:21 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/11 18:31:45 by llupache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n========== ARRAY TESTS ==========" << std::endl;
	const Animal *meta[10];
	
	for ( int i = 0; i < 10; i++ ) {
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}

	for ( int i = 0; i < 10; i++ ) {
		delete meta[i];
	}

	std::cout << "\n========== DEEP COPY TESTS ==========" << std::endl;
	std::cout << "\n--- Testing Dog Copy ---" << std::endl;
	Dog basicDog;
	{
		Dog tmpDog = basicDog;
	}
	std::cout << "Dog survived deep copy test!" << std::endl;

	std::cout << "\n--- Testing Cat Assignment ---" << std::endl;
	Cat basicCat;
	Cat anotherCat;
	anotherCat = basicCat;
	std::cout << "Cat survived deep assignment test!" << std::endl;

	std::cout << "\n========== END OF TESTS ==========\n" << std::endl;

	return 0;
}