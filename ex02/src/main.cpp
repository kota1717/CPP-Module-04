/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:12:08 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 16:30:26 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const AAnimal* dog1 = new Dog();
	const AAnimal* cat1 = new Cat();

	dog1->makeSound();
	cat1->makeSound();

	delete dog1;
	delete cat1;

	// const AAnimal* aanimal1 = new AAnimal();

	// aanimal1->makeSound();

	// delete aanimal1;

	return 0;
}
