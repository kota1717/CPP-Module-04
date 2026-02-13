/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:25:30 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 13:58:07 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCLUDE_WRONGANIMAL_HPP_
#define EX00_INCLUDE_WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();

	std::string getType() const;
	void makeSound() const;
protected:
	std::string _type;
};

#endif
