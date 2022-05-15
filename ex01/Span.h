/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:43:07 by ncallie           #+#    #+#             */
/*   Updated: 2022/04/01 18:45:49 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <exception>
#include <vector>
#include <iostream>

class Span {
private:
    unsigned int size;
    std::vector<int> v;
public:
    Span();
    Span(unsigned int size);
    Span(const Span &other);
    Span &operator = (const Span &other);
    ~Span();

    void addNumber(int num);
    void addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
    std::vector<int> &getVector();

    int longestSpan();
    int shortestSpan();


    class fullArrayException : public std::exception {
    public:
        const char *what() const _NOEXCEPT;
    };

};
