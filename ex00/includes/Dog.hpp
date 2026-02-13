/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:18 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 13:58:14 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCLUDE_DOG_HPP_
#define EX00_INCLUDE_DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	virtual ~Dog();
	virtual void makeSound() const;
};

#endif
