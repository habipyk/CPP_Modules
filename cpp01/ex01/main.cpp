#include "Zombie.h"

int	main(void)
{
	Zombie *Horde;

	Horde = zombieHorde(7, "Charger");
	for (int i = 0; i < 7; i++)
		Horde[i].announce();
	delete [] Horde;
	return (EXIT_SUCCESS);
}