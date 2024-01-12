#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				argv[i][j] = ::toupper(argv[i][j]);
				j++;
			}
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return (0);
}
