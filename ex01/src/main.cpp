/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:12:08 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 16:25:08 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define N_ANIMALS 10

int main()
{
	const Animal* animals[N_ANIMALS];

	for (int i = 0; i < N_ANIMALS; i++) {
		if (i < N_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < N_ANIMALS; i++) {
		delete animals[i];
	}

	// Dog deep copy test
	// Dog* dog1 = new Dog();
	// dog1->setIdea(0, "Idea A");
	// Dog* dog2 = new Dog(*dog1);
	// Dog* dog3 = new Dog();
	// *dog3 = *dog2;
	// dog3->setIdea(0, "Idea B");

	// std::cout << "Dog2: " << dog2->getIdea(0) << std::endl;
	// std::cout << "Dog3: " << dog3->getIdea(0) << std::endl;

	// delete dog3;
	// delete dog2;
	// delete dog1;

	// Cat deep copy test
	// Cat* cat1 = new Cat();
	// cat1->setIdea(0, "Idea C");
	// Cat* cat2 = new Cat(*cat1);
	// Cat* cat3 = new Cat();
	// *cat3 = *cat2;
	// cat3->setIdea(0, "Idea D");

	// std::cout << "Cat2: " << cat2->getIdea(0) << std::endl;
	// std::cout << "Cat3: " << cat3->getIdea(0) << std::endl;

	// delete cat3;
	// delete cat2;
	// delete cat1;

	return 0;
}
