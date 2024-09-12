/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:10:43 by hshimizu          #+#    #+#             */
/*   Updated: 2024/09/12 21:37:10 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

template <typename T> typename T::iterator easyfind(T &container, int n);
template <typename T>
typename T::const_iterator easyfind(T const &container, int n);

#include "easyfind.tpp"

#endif
