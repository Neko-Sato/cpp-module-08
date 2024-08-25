/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:15:46 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 11:44:00 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <typename C> typename C::iterator easyfind(C &container, int n) {
  return std::find(container.begin(), container.end(), n);
}

template <typename C>
typename C::const_iterator easyfind(C const &container, int n) {
  return std::find(container.begin(), container.end(), n);
}
