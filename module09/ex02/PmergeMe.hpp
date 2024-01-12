#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <sys/time.h>

class PmergeMe
{
	private:
		PmergeMe(const PmergeMe & ref);
		PmergeMe & operator=(const PmergeMe & ref);
	public:
		PmergeMe();
		~PmergeMe();
		long long int	getCurrentTimeMicros();

		void			mergeSort(std::vector<int> & vec, std::list<int> & list);

		void			mergeSortVec(std::vector<int> & vec, std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void			mergeVec(std::vector<int>::iterator begin, std::vector<int>::iterator mid, std::vector<int>::iterator end);

		void			mergeList(std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end);
		void 			mergeSortList(std::list<int> & list, std::list<int>::iterator begin, std::list<int>::iterator end);
};
