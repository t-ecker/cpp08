/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:23:18 by tecker            #+#    #+#             */
/*   Updated: 2024/12/07 20:17:04 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string.h>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{ 
	public:
		MutantStack()
			: std::stack<T>()
		{
		}
		MutantStack(const MutantStack &src)
			: std::stack<T>(src)
		{
		}
		MutantStack &operator=(const MutantStack &src)
		{
			if (this != &src)
				std::stack<T>::operator=(src);
			return (*this);
		}
		~MutantStack()
		{
		}

		using iterator = typename std::stack<T>::container_type::iterator;

		iterator begin()
		{
			if (this->c.empty())
				throw std::out_of_range("stack is empty!");
			return (this->c.begin());
		}

		iterator end()
		{
			if (this->c.empty())
				throw std::out_of_range("stack is empty!");
			return (this->c.end());
		}
};

#endif