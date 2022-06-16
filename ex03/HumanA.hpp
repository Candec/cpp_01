#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:

	HumanA(Weapon weapon);
	~HumanA();

	std::string	name;
	Weapon weapon;

	void attack();

};


#endif