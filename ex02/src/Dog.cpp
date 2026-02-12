/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:16 by ikota             #+#    #+#             */
/*   Updated: 2026/02/12 14:10:38 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
	std::cout << "Dog Default Constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other) {
	std::cout << "Dog Copy Constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy Assignment operator called" << std::endl;
	if (this != &other) {
		AAnimal::operator=(other);
		if (_brain && other._brain) {
			*_brain = *other._brain;
		}
	}
	return *this;
}

Dog::~Dog() {
	delete(_brain);
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << getType() << " Woof" << std::endl;
}

std::string Dog::getIdea(int index) const {
	return _brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string& idea) {
	return _brain->setIdea(index, idea);
}
