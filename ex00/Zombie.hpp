#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <string.h>

class Zombie
{

	public:

	Zombie(std::string name);
	~Zombie(void);
	void announce(void);

	private:

	std::string name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
