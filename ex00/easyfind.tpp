/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:15:46 by hshimizu          #+#    #+#             */
/*   Updated: 2024/09/12 21:37:30 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <typename T> typename T::iterator easyfind(T &container, int n) {
  return std::find(container.begin(), container.end(), n);
}

template <typename T>
typename T::const_iterator easyfind(T const &container, int n) {
  return std::find(container.begin(), container.end(), n);
}
