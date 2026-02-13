/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:15:35 by ikota             #+#    #+#             */
/*   Updated: 2026/02/13 14:41:53 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCLUDE_BRAIN_HPP_
#define EX01_INCLUDE_BRAIN_HPP_

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	virtual ~Brain();

	std::string getIdea(int index) const;
	void setIdea(int index, const std::string &idea);

private:
	std::string _ideas[100];
};

#endif
