#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<int> v;
	std::list<int> l;
	PmergeMe	pmergeme;

	if (argc == 1)
	{
		std::cout << "./Pmerge [number to sort]" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		v.push_back(std::atoi(argv[i]));
		l.push_back(std::atoi(argv[i]));
	}
	pmergeme.mergeSort(v, l);
	return 0;
}
