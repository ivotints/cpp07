/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:05:30 by ivotints          #+#    #+#             */
/*   Updated: 2024/10/09 11:44:58 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T *_data;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &src);
		Array &operator=(const Array &src);
		~Array();
		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		unsigned int size() const;

};

#include "Array.tpp"
