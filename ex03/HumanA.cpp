#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), _weapon(weapon)
{
	this->name = name;
	this->_weapon.getType();
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << _weapon.getType() << std::endl;
}

void HumanA::setWeapon(const Weapon weapon)
{
	this->_weapon = weapon;
}