/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:25:30 by ikota             #+#    #+#             */
/*   Updated: 2026/02/11 17:42:10 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDE_WRONGANIMAL_HPP_
#define EX02_INCLUDE_WRONGANIMAL_HPP_

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

