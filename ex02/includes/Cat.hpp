/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:13:13 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 14:43:36 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_INCLUDE_CAT_HPP_
#define EX02_INCLUDE_CAT_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	virtual ~Cat();
	virtual void makeSound() const;

	std::string getIdea(int index) const;
	void setIdea(int index, const std::string& idea);

private:
	Brain *_brain;
};

#endif
