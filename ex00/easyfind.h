/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:42:35 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/01 18:42:38 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
#include <array>
#include <vector>
#include <map>

template <typename T>
typename T::const_iterator easyFind(const T &t, int i) {
    typename T::const_iterator ite = t.end();
    typename T::const_iterator it = std::find(t.begin(), ite, i);
    if (it == ite)
        throw (std::exception());
    return (it);
}

