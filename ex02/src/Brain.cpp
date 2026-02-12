/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:15:38 by ikota             #+#    #+#             */
/*   Updated: 2026/02/12 14:22:06 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain Copy Assignment operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return _ideas[index];
	}
	return "";
}

void Brain::setIdea(int index, const std::string &idea) {
	if (index >= 0 && index < 100) {
		_ideas[index] = idea;
	}
}
