#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : name(name), _weapon(NULL)
{
	this->name = name;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}