#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "address str: " << &str << std::endl;
	std::cout << "address ptr: " << ptr << std::endl;
	std::cout << "address ref: " << &ref << std::endl;
	std::cout << "str: " << str << std::endl;
	std::cout << "ptr: " << *ptr << std::endl;
	std::cout << "ref: " << ref << std::endl;
	return (0);
}
