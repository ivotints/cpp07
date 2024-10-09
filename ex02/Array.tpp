/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:59:29 by ivotints          #+#    #+#             */
/*   Updated: 2024/10/09 11:45:09 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(Array<T> const &src) : _data(new T[src._size]), _size(src._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = src._data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		delete[] _data;
		_size = src._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = src.data[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Array index out of bounds");
	return (_data[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Array index out of bounds");
	return (_data[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}
