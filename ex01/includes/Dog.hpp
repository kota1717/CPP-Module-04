/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:18 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 13:59:40 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDE_DOG_HPP_
#define EX01_INCLUDE_DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	virtual ~Dog();
	virtual void makeSound() const;

	std::string getIdea(int index) const;
	void setIdea(int index, const std::string& idea);

private:
	Brain *_brain;
};

#endif
