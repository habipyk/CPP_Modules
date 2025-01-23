#include "Zombie.h"

int	main(void)
{
	Zombie	*Heap;
	Heap = newZombie("undead");
	Heap->announce();
	delete Heap;

	randomChump("Stack");
   
	return (EXIT_SUCCESS);
}
