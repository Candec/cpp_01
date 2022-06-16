#include "Zombie.hpp"

/*
** HEAP
** 1. Has to be managed by the programmer.
** 2. It allows dynamic memory allocation.
** 3. Pointers can be used to access the data
*/

/*
** STACK
** 1. Is faster, but it is also linear and has a limited capacity.
** 2. The size and allocation is static, meaning it cannot be changed
**    during the program run time.
** 3. The manangement is done by the OS
*/

int main(void)
{

	Zombie *heap;
	Zombie uwu("uwu");

	uwu.announce();
	heap = newZombie("heap");
	heap->announce();
	randomChump("stack");
	delete(heap);

	return (0);
}