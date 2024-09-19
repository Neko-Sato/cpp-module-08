/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:16:42 by hshimizu          #+#    #+#             */
/*   Updated: 2024/09/20 04:35:47 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _maxsize(N), _numbers() {
}

Span::Span(Span const &other)
    : _maxsize(other._maxsize), _numbers(other._numbers) {
}

Span::~Span() {
}

Span &Span::operator=(Span const &other) {
  if (this != &other) {
    _maxsize = other._maxsize;
    _numbers = other._numbers;
  }
  return *this;
}

void Span::addNumber(int n) {
  if (_numbers.size() >= _maxsize)
    throw std::out_of_range("Span is full");
  _numbers.insert(n);
}

unsigned int Span::shortestSpan() const {
  if (_numbers.size() <= 1)
    throw std::logic_error("Span element is missing");
  unsigned int min = -1;
  {
    std::multiset<int>::iterator it = _numbers.begin();
    std::multiset<int>::iterator pre = it++;
    for (; it != _numbers.end(); ++it, ++pre) {
      unsigned int diff = *it - *pre;
      if (diff < min)
        min = diff;
    }
  }
  return min;
}

unsigned int Span::longestSpan() const {
  if (_numbers.size() <= 1)
    throw std::logic_error("Span element is missing");
  return (*--_numbers.end() - *_numbers.begin());
}
