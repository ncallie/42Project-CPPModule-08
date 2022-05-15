/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:43:03 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/01 18:43:05 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <numeric>
#include "Span.h"



const char *Span::fullArrayException::what() const throw() {
    return "Array is Full!";
}

Span::Span() {
    size = 0;
}

Span::Span(unsigned int size) {
    this->size = size;
}

Span::Span(const Span &other) {
    this->size = other.size;
    this->v = other.v;
}

Span &Span::operator=(const Span &other) {
    this->size = other.size;
    this->v = other.v;
    return *this;
}

Span::~Span() {

}

void Span::addNumber(int num) {
    if (v.size() == size)
        throw fullArrayException();
    v.push_back(num);
}

std::vector<int> &Span::getVector() {
    return v;
}

int Span::longestSpan() {
    if (size == 0 || v.empty() || v.size() == 1)
        throw std::exception();
    std::vector<int>::const_iterator it = v.cbegin();
    std::vector<int>::const_iterator ite = v.cend();
    int max = *std::max_element(it, ite);
    int min = *std::min_element(it, ite);
    return max - min;
}

int Span::shortestSpan() {
    if (size == 0 || v.empty() || v.size() == 1)
        throw std::exception();
    std::vector<int> temp = v;
    std::sort(temp.begin(), temp.end());
    std::adjacent_difference(temp.begin(), temp.end(), temp.begin());
    return *std::min_element(temp.begin() + 1, temp.end());
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite) {
    if (it > ite)
        return ;
    if (size == 0)
        throw std::exception();
    std::vector<int>::iterator copy_it = it;
    std::vector<int>::iterator copy_ite = ite;

    for (int i = 0; copy_it != copy_ite; copy_it++) {
        if (v.size() == size)
            throw fullArrayException();
        v.push_back(*copy_it);
    }
}

