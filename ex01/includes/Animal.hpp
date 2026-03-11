/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:34:22 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/01 21:08:30 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &other);
	Animal& operator=(const Animal &other);
	const std::string getType() const;

	virtual void makeSound() const;

protected:
	std::string _type;

};

#endif