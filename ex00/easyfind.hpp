/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:23:18 by tecker            #+#    #+#             */
/*   Updated: 2024/12/07 12:51:24 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string.h>
#include <iostream>
#include <algorithm>
#include <stdexcept>

template<typename T>
void easyfind(T a, int i)
{
	typename T::iterator it;
	it = std::find(a.begin(), a.end(), i);
	if (it == a.end())
		throw (std::invalid_argument("Value was not found in the container!"));
	std::cout << "value found in container at index: " << std::distance(a.begin(), it) << std::endl;
}

#endif