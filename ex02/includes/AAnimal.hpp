/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:09 by ikota             #+#    #+#             */
/*   Updated: 2026/02/12 14:37:14 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDE_AANIMAL_HPP_
#define EX02_INCLUDE_AANIMAL_HPP_

#include <iostream>

class AAnimal {
public:
	AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);
	virtual ~AAnimal();

	std::string getType() const;
	virtual void makeSound() const = 0;
protected:
	std::string _type;
};

#endif
