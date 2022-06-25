#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:

	HumanA(const std::string& name, Weapon& weapon);

	std::string	name;
	Weapon& _weapon;

	void attack();
	void setWeapon(const Weapon weapon);

};


#endif