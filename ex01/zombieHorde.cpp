#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{

	Zombie	*horde = new Zombie[N];
	std::stringstream	stream;

	for (int i = 0; i < N; i++)
	{
		stream << name << i + 1;
		horde[i].setName(stream.str());
		stream.str("");
	}

	return (horde);
}