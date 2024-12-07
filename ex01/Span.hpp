/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:23:18 by tecker            #+#    #+#             */
/*   Updated: 2024/12/07 20:17:04 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string.h>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>

class Span
{
	private:
		uint _N;
		std::vector<int> _vec;
	public:
		Span();
		Span(uint N);
		Span(const Span &src);
        Span &operator=(const Span &src);
		~Span();
		void addNumber(int n);

		template<typename T>
		void addRange(T start, T end)
		{
			if (_vec.size() + std::distance(start, end) > _N)
				throw std::out_of_range("there is no space left for total range!");
			_vec.insert(_vec.end(), start, end);
		}
		
		int shortestSpan(void);
		int longestSpan(void);
};

#endif