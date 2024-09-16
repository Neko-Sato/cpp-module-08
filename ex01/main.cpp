/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:33:16 by hshimizu          #+#    #+#             */
/*   Updated: 2024/09/16 15:47:09 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
  {
    Span sp(5);
    try {
      std::cout << sp.shortestSpan() << std::endl;
    } catch (const std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
    try {
      std::cout << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
    sp.addNumber(0);
    try {
      std::cout << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
      std::cerr << e.what() << std::endl;
    }
  }
  {
    Span sp(100000);
    try {
      for (int i = 0;; i += 2)
        sp.addNumber(i);
    } catch (std::exception &e) {
      std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    Span sp(vec.begin(), vec.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  {
    Span sp(5);
    int arr[] = {0, 2, 4, 6, 8};
    sp.addNumber(arr, arr + sizeof(arr) / sizeof(*arr));
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try {
      sp.addNumber(arr, arr + sizeof(arr) / sizeof(*arr));
    } catch (std::exception &e) {
      std::cout << "Exception: " << e.what() << std::endl;
    }
  }
  return 0;
}
