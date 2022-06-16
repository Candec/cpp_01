#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string* strPTR = &str;

	std::string& strREF = str;

	std::cout << "This is the memory address of the string variable" << std::endl;
	std::cout << &str << std::endl;
	std::cout << "This is the memory address held by the pointer" << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << "This is the memory address held by the reference" << std::endl;
	std::cout << &strREF << std::endl;

	std::cout << std::endl;

	std::cout << "This is the value of the string variable" << std::endl;
	std::cout << str << std::endl;
	std::cout << "This is the value pointed by the pointer" << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << "This is the value referenced by the reference" << std::endl;
	std::cout << strREF << std::endl;

	return (0);
}