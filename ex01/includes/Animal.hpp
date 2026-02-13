/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:09 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 13:58:58 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDE_ANIMAL_HPP_
#define EX01_INCLUDE_ANIMAL_HPP_

#include <iostream>

class Animal {
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;
protected:
	std::string _type;
};

#endif
