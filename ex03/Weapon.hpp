#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:

	Weapon(const std::string& type);
	Weapon(const Weapon& weapon);

	const std::string&	getType(void);
	void				setType(const std::string& type);

	private:

	std::string type;
};


#endif