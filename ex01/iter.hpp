/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:05:30 by ivotints          #+#    #+#             */
/*   Updated: 2024/10/09 11:49:18 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void	iter(T* array, size_t length, void func(T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T, typename F>
void iter(T* array, size_t length, F func)
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}
