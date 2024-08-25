/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:33:16 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 13:59:12 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

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
  return 0;
}
