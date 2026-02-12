/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:12:08 by ikota             #+#    #+#             */
/*   Updated: 2026/02/12 14:20:07 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define N_ANIMALS 10

int main()
{
	const Animal* Animals[N_ANIMALS];

	for (int i = 0; i < N_ANIMALS; i++) {
		if (i < N_ANIMALS / 2)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}

	for (int i = 0; i < N_ANIMALS; i++) {
		delete Animals[i];
	}

	// Dog deep copy test
	Dog* Dog1 = new Dog();
	Dog1->setIdea(0, "Idea A");
	Dog* Dog2 = new Dog(*Dog1);
	Dog* Dog3 = new Dog();
	*Dog3 = *Dog2;
	Dog3->setIdea(0, "Idea B");

	std::cout << "Dog2: " << Dog2->getIdea(0) << std::endl;
	std::cout << "Dog3: " << Dog3->getIdea(0) << std::endl;

	delete Dog3;
	delete Dog2;
	delete Dog1;

	// Cat deep copy test
	Cat* Cat1 = new Cat();
	Cat1->setIdea(0, "Idea C");
	Cat* Cat2 = new Cat(*Cat1);
	Cat* Cat3 = new Cat();
	*Cat3 = *Cat2;
	Cat3->setIdea(0, "Idea D");

	std::cout << "Cat2: " << Cat2->getIdea(0) << std::endl;
	std::cout << "Cat3: " << Cat3->getIdea(0) << std::endl;

	delete Cat3;
	delete Cat2;
	delete Cat1;

	return 0;
}
