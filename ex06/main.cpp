#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "0. No mode selected" << std::endl;
		return (1);
	}
	if (argc != 2)
	{
		std::cout << "Too many args" << std::endl;
		return (1);
	}

	Harl harl;

	harl.complain(argv[1]);

	return (0);
}