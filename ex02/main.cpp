/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:43:22 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/01 18:43:23 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.h"

int main() {

//    std::stack<int> i;
//    i.push(5);
//    i.push(43);
//    i.push(65);
//    i.push(72);
//    std::cout << *(&i.top());

    MutantStack<int> mstack;
    mstack.push(10);
    mstack.push(11);
    mstack.push(42);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "iterate through stack:" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << std::endl << "-------------------------------------------" << std::endl;
    MutantStack<int> mstack2(mstack);
    MutantStack<int>::iterator it2 = mstack.begin();
    MutantStack<int>::iterator ite2 = mstack.end();
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
}
