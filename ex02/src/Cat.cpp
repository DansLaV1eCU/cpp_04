/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:58:55 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/11 18:29:42 by llupache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
	this->_type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat meows" << std::endl;
}