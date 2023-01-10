#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:

	// Rip to initializing the values here. It's only a CPP11 functionality
	//	= { >:C }
	std::string mode[5];
	void (Harl::*_pmode[5])();

	Harl();
	~Harl();

	void complain(std::string level);

	private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void other(void);
};

#endif