/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:01:48 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 14:47:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <deque>
#include <stack>

template <typename T, typename Sequence = std::deque<T> >
class MutantStack : public std::stack<T, Sequence> {
private:
public:
  typedef typename Sequence::iterator iterator;
  typedef typename Sequence::const_iterator const_iterator;

  MutantStack() : std::stack<T, Sequence>() {
  }
  MutantStack(MutantStack const &other) : std::stack<T, Sequence>(other) {
  }
  ~MutantStack() {
  }
  MutantStack &operator=(MutantStack const &other) {
    return std::stack<T, Sequence>::operator=(other);
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
  void push(const T &value) {
    this->c.push_back(value);
  }
  void pop() {
    this->c.pop_back();
  }
};

#endif
