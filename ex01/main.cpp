/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:42:58 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/01 18:43:01 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

int main() {
    Span span(6);
    span.addNumber(9);
    span.addNumber(5);
    span.addNumber(18);
    std::cout << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;

    std::cout << std::endl;

    std::vector<int> randNum;
    srand(time(NULL));
    for (int i = 0; i < 1000; i++) {
        randNum.push_back(rand());
    }
    for (int i = 0; i < randNum.size(); i++) {
        std::cout << randNum.at(i) << "\t";
    }
    std::cout << std::endl;
    Span spanBig(1000);
    spanBig.addNumber(randNum.begin(), randNum.end());
    std::cout << "Shortest span: " << spanBig.shortestSpan() << std::endl;
    std::cout << "Longestest span: " << spanBig.longestSpan() << std::endl;

    std::cout << std::endl;

    Span sp = Span(15000);
    for (int i = 0; i < 15000; i++)
    {
        sp.addNumber(i);
    }
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longestest span: " << sp.longestSpan() << std::endl;
    Span sp2 = Span(15000);
    std::vector<int>::iterator a = sp.getVector().begin();
    std::vector<int>::iterator b = sp.getVector().end();
    sp2.addNumber(a, b);
    std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp2.longestSpan() << std::endl;

    std::cout << std::endl;

    Span sp3 = Span(5);
    sp3.addNumber(6);
    sp3.addNumber(3);
    sp3.addNumber(17);
    sp3.addNumber(9);
    sp3.addNumber(11);
    std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
}
