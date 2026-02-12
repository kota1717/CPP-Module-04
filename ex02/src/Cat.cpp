/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:11 by ikota             #+#    #+#             */
/*   Updated: 2026/02/12 14:20:42 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal() {
	std::cout << "Cat Default Constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other) {
	std::cout << "Cat Copy Constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy Assignment operator called" << std::endl;
	if (this != &other) {
		AAnimal::operator=(other);
		if (_brain && other._brain) {
			*_brain = *other._brain;
		}
	}
	return *this;
}

Cat::~Cat() {
	delete(_brain);
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << getType() << " Meeeoow" << std::endl;
}

std::string Cat::getIdea(int index) const {
	return _brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string& idea) {
	return _brain->setIdea(index, idea);
}
