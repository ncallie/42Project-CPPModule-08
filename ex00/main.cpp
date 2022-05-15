/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:42:42 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/01 18:42:49 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"

int main() {
    std::cout << "VECTOR" << std::endl;
    std::vector<int> v;
    v.push_back(11);
    v.push_back(22);
    v.push_back(33);
    v.push_back(44);
    v.push_back(55);
    std::vector<int>::const_iterator it_vS  = v.cbegin();
    std::vector<int>::const_iterator it_vE = v.cend();
    for (; it_vS != it_vE; ++it_vS) {
        std::cout << "value: " << *it_vS << std::endl;
    }
    try {
        std::cout << "search: " <<  5;
        std::cout << " find: " << *easyFind(v, 5) << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Value 5 not found" << std::endl;
    }
    try {
        std::cout << "search: " <<  55;
        std::cout << " find: " << *easyFind(v, 55) << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Value 55 not found" << std::endl;
    }

    std::cout << "LIST" << std::endl;
    std::list<int> l;
    l.push_back(11);
    l.push_back(22);
    l.push_back(33);
    l.push_back(44);
    l.push_back(55);
    std::list<int>::const_iterator it_lS  = l.cbegin();
    std::list<int>::const_iterator it_lE = l.cend();
    for (; it_lS != it_lE; ++it_lS) {
        std::cout << "value: " << *it_lS << std::endl;
    }
    try {
        std::cout << "search: " <<  5;
        std::cout << " find: " << *easyFind(l, 5) << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Value 5 not found" << std::endl;
    }
    try {
        std::cout << "search: " <<  55;
        std::cout << " find: " << *easyFind(l, 55) << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Value 55 not found" << std::endl;
    }
    return 0;
}
