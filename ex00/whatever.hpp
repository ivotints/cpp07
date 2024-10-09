/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:05:30 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/20 21:12:30 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void	swap(T &param1, T &param2)
{
	T temp = param1;
	param1 = param2;
	param2 = temp;
}

template <typename T>
const T	&min(const T &param1, const T &param2)
{
	if (param1 < param2)
		return (param1);
	return (param2);
}

template <typename T>
const T	&max(const T &param1, const T &param2)
{
	if (param1 > param2)
		return (param1);
	return (param2);
}
