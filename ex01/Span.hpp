/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:52:58 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 13:36:36 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <set>

class Span {
private:
  unsigned int _maxsize;
  std::multiset<int> _numbers;

public:
  Span(unsigned int N = 0);
  Span(Span const &other);
  ~Span();
  Span &operator=(Span const &other);
  void addNumber(int n);
  unsigned int shortestSpan() const;
  unsigned int longestSpan() const;
};

#endif
