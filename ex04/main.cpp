#include "sed.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Insuficient arguments" << std::endl;
		return (1);
	}

	std::ifstream				in_file;
	std::ofstream				out_file;
	std::string					_dir;
	std::string					_in;
	std::string					_out;
	std::string					line;
	std::string					tmp;
	size_t						i;

	in_file.open(argv[1], std::ifstream::in);
	if (in_file.fail())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}

	_dir = std::string(argv[1]) + ".replace";
	_in = std::string(argv[2]);
	_out = std::string(argv[3]);

	out_file.open(_dir.c_str(), std::ofstream::out);

	while (std::getline(in_file, line))
	{
		i = 0;
		i = line.find(_in, i);
		while (i != line.length() && i != line.npos)
		{
			tmp = line.substr(0, i) + _out + line.substr(i + _in.length(), line.npos);
			line = tmp;
			i = line.find(_in, i);
		}
		out_file << line << std::endl;
	}

	in_file.close();
	out_file.close();
	
	return (0);
}