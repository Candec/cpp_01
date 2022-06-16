#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <string>
# include <string.h>

# define RESET			"\033[0m"
# define BLACK			"\033[30m"			/* Black */
# define RED			"\033[31m"			/* Red */
# define GREEN			"\033[32m"			/* Green */
# define YELLOW			"\033[33m"			/* Yellow */
# define BLUE			"\033[34m"			/* Blue */
# define MAGENTA		"\033[35m"			/* Magenta */
# define CYAN			"\033[36m"			/* Cyan */
# define WHITE			"\033[37m"			/* White */
# define BOLDBLACK		"\033[1m\033[30m"	/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"	/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"	/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"	/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"	/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"	/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"	/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"	/* Bold White */
# define BACKRED		"\033[41;1m"
# define BACKGREEN		"\033[42;1m"
# define BACKYELLOW		"\033[43;1m"
# define BACKTEST		"\033[43;1m"

class Zombie
{

	public:

	Zombie();
	Zombie(std::string name);

	~Zombie(void);

	void announce(void);
	void setName(std::string name);

	private:

	std::string name;
};

Zombie	*zombieHorde(int N, std::string name);

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif