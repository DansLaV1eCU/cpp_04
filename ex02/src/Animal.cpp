/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llupache <llupache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:55:36 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/11 18:40:23 by llupache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

const std::string Animal::getType() const {
	return this->_type;
}
