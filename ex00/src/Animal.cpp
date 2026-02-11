/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:07 by ikota             #+#    #+#             */
/*   Updated: 2026/02/11 17:03:47 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default") {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal Copy Assignment operator called" << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const {
	return _type;
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound" << std::endl;
}
