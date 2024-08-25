/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:16:47 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 11:51:49 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main() {
  {
	std::cout << "Test Vector" << std::endl;
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> c(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::cout << *easyfind(c, 3) << std::endl;
    if (easyfind(c, 42) == c.end())
      std::cout << "Not found" << std::endl;
    else
      std::cout << "Found" << std::endl;
    if (easyfind(c, 1) == c.end())
      std::cout << "Not found" << std::endl;
    else
      std::cout << "Found" << std::endl;
  }
  {
	std::cout << "Test List" << std::endl;
    int arr[] = {1, 2, 3, 4, 5};
    std::list<int> c(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::cout << *easyfind(c, 3) << std::endl;
    if (easyfind(c, 42) == c.end())
      std::cout << "Not found" << std::endl;
    else
      std::cout << "Found" << std::endl;
    if (easyfind(c, 1) == c.end())
      std::cout << "Not found" << std::endl;
    else
      std::cout << "Found" << std::endl;
  }
  {
	std::cout << "Test const Vector" << std::endl;
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> const c(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::cout << *easyfind(c, 3) << std::endl;
    if (easyfind(c, 42) == c.end())
      std::cout << "Not found" << std::endl;
    else
      std::cout << "Found" << std::endl;
    if (easyfind(c, 1) == c.end())
      std::cout << "Not found" << std::endl;
    else
      std::cout << "Found" << std::endl;
  }
  return (0);
}