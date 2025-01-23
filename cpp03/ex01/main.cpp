#include "ScavTrap.hpp"

int main(){
	
	ClapTrap *t1 = new ScavTrap();
	delete t1;
	ScavTrap t2;

	ScavTrap a( "soldierA" ), b( "soldierB" ), c, d( "soldierC" );
	a.attack( "soldierB" );
	b.attack( "soldierC" );
	a.takeDamage( 56 );
	a.beRepaired( 12 );
	b.takeDamage( 125 );
	b.beRepaired( 15 );

	a.guardGate();
	a.guardGate();
	c = a;
	a.beRepaired(0);
	c.beRepaired(0);
	d = a;
	a.beRepaired(0);
	d.beRepaired(0);

}
