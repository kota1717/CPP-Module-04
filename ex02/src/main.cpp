/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:12:08 by ikota             #+#    #+#             */
/*   Updated: 2026/02/12 14:55:30 by ikota            ###   ########.fr       */
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

	return 0;
}
