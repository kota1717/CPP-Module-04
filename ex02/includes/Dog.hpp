/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:18 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 14:43:31 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDE_DOG_HPP_
#define EX02_INCLUDE_DOG_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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
