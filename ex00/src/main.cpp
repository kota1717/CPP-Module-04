/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:12:08 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 16:14:31 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	const WrongAnimal* Animal = new WrongAnimal();
	const WrongAnimal* Cat = new WrongCat();
	std::cout << Cat->getType() << " " << std::endl;
	Cat->makeSound();
	Animal->makeSound();

	delete Cat;
	delete Animal;

	return 0;
}
