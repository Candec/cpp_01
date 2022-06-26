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
	size_t i;


	for (i = 0; i < 5; i++)
	{
		if (!mode[i].compare(level))
		{
			break ;
		}
	}

	switch (i)
	{
		case 0:
			for (size_t j = 0; j <= i; j++)
			{
				(this->*_pmode[j])();
			}
			break;
		case 1:
			for (size_t j = 0; j <= i; j++)
			{
				(this->*_pmode[j])();
			}
			break;
		case 2:
			for (size_t j = 0; j <= i; j++)
			{
				(this->*_pmode[j])();
			}
			break;
		case 3:
			for (size_t j = 0; j <= i; j++)
			{
				(this->*_pmode[j])();
			}
			break;
		case 4:
			std::cout << "5. Mode not found" << std::endl;
			break;
		default:
			break;
	}

}

void Harl::debug()
{
	std::cout << "1. I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "2. I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "3. I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "4. This is unacceptable! I want to speak to the manager now." << std::endl;
}