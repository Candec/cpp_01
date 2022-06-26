#include "Harl.hpp"

Harl::Harl()
{
	this->mode[0] = "debug";
	this->mode[1] = "info";
	this->mode[2] = "warning";
	this->mode[3] = "error";
	this->_pmode[0] = &Harl::debug;
	this->_pmode[1] = &Harl::info;
	this->_pmode[2] = &Harl::warning;
	this->_pmode[3] = &Harl::error;
}

Harl::~Harl()
{

}

void Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!mode[i].compare(level))
		{
			(this->*_pmode[i])();
			return ;
		}
	}

	std::cout << "No mode selected" << std::endl;
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}