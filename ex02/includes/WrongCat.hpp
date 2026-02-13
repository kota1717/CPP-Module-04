/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:25:51 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 15:30:06 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDE_WRONGCAT_HPP_
#define EX02_INCLUDE_WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);
	virtual ~WrongCat();
	void makeSound() const;
};

#endif
