/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:10:43 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 11:43:35 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

template <typename C> typename C::iterator easyfind(C &container, int n);
template <typename C>
typename C::const_iterator easyfind(C const &container, int n);

#include "easyfind.tpp"

#endif
