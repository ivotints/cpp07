/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:11:30 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/20 22:44:57 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void printElement(T &element)
{
	std::cout << element << " ";
}

template<typename T>
void increment(T &element)
{
	element++;
}

template<typename T>
void add(T &element)
{
	element += "_";
}

int	main()
{
	int arr[] = {1, 2, 3, 4, 5};
	size_t len = sizeof(arr) / sizeof(arr[0]);

	iter(arr, len, printElement);
	std::cout << std::endl;
	iter(arr, len, increment);
	iter(arr, len, printElement);
	std::cout << std::endl;

	std::string str[] = {"str1", "str2", "str3", "str4", "str5"};
	len = sizeof(str) / sizeof(str[0]);
	iter(str, len, printElement);
	std::cout << std::endl;
	iter(str, len, add);
	iter(str, len, printElement);
	std::cout << std::endl;
}
