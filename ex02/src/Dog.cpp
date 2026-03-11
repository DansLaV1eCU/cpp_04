/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:57:51 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/11 18:29:44 by llupache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
	this->_type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Dog barks" << std::endl;
}