/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:07 by ikota             #+#    #+#             */
/*   Updated: 2026/02/11 17:03:47 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default") {
	std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	std::cout << "AAnimal Copy Assignment operator called" << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType() const {
	return _type;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal makeSound" << std::endl;
}
