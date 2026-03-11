/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:55:36 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/01 20:36:52 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

const std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makes a sound" << std::endl;
}