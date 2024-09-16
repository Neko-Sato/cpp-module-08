/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:52:58 by hshimizu          #+#    #+#             */
/*   Updated: 2024/09/16 15:44:56 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <exception>
#include <set>
#include <stdexcept>

class Span {
private:
  unsigned int _maxsize;
  std::multiset<int> _numbers;

public:
  Span(unsigned int N = 0);
  template <class InputIter> Span(InputIter first, InputIter last);
  Span(Span const &other);
  ~Span();
  Span &operator=(Span const &other);
  void addNumber(int n);
  template <class InputIter> void addNumber(InputIter first, InputIter last);
  unsigned int shortestSpan() const;
  unsigned int longestSpan() const;
};

template <class InputIter>
Span::Span(InputIter first, InputIter last)
    : _maxsize(std::distance(first, last)) {
  while (first != last)
    _numbers.insert(*first++);
}

template <class InputIter>
void Span::addNumber(InputIter first, InputIter last) {
  if (_numbers.size() + std::distance(first, last) > _maxsize)
    throw std::out_of_range("Span is full");
  while (first != last)
    _numbers.insert(*first++);
}

#endif
