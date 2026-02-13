/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:13 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 13:57:30 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCLUDE_CAT_HPP_
#define EX00_INCLUDE_CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	virtual ~Cat();
	virtual void makeSound() const;
};

#endif
