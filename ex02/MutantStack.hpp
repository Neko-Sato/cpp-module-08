/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:01:48 by hshimizu          #+#    #+#             */
/*   Updated: 2024/09/12 22:19:57 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <deque>
#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
private:
public:
  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef typename std::stack<T>::container_type::const_iterator const_iterator;

  MutantStack() : std::stack<T>() {
  }
  MutantStack(MutantStack<T> const &other) : std::stack<T>(other) {
  }
  ~MutantStack() {
  }
  MutantStack<T> &operator=(MutantStack<T> const &other) {
    return std::stack<T>::operator=(other);
  }

  iterator begin() {
    return this->c.begin();
  }
  iterator end() {
    return this->c.end();
  }
  const_iterator begin() const {
    return this->c.begin();
  }
  const_iterator end() const {
    return this->c.end();
  }
  void push(T const &value) {
    this->c.push_back(value);
  }
  void pop() {
    this->c.pop_back();
  }
};

#endif
