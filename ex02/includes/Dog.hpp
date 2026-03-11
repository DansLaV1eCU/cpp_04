/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:34:22 by danslav1e         #+#    #+#             */
/*   Updated: 2026/03/01 21:35:16 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:
	Dog();
	~Dog();
	Dog( const Dog &other );
	Dog& operator=( const Dog &other );

	void makeSound() const;

private:
	Brain *_brain;

};

#endif