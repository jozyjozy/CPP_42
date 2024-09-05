/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:42:27 by jozy              #+#    #+#             */
/*   Updated: 2024/02/19 19:16:51 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <deque>
#include <iostream>
#include <iomanip>

class PmergeMe
{
private:

public:

    std::vector<int> vector;
    std::deque<int> deque;
    char **_start;
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &src);
    PmergeMe &operator=(const PmergeMe &src);
    void createVectAndDeque(char** av);
    void sortVectAndDeque();
    void sortVectRecursif(int x, int y);
    void mergeVect(int b, int m, int e);
    void insertVect(int begin, int end);
    void sortDequeRecursif(int x, int y);
    void mergeDeque(int b, int m, int e);
    void insertDeque(int begin, int end);
    void printError();
    PmergeMe(char **av);
};

#endif
