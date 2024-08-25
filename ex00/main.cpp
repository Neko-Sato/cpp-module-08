/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:16:47 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 11:43:16 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  std::vector<int> const v(arr, arr + sizeof(arr) / sizeof(arr[0]));
  std::cout << *easyfind(v, 3) << std::endl;
  return (0);
}