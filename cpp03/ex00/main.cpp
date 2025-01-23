#include "ClapTrap.hpp"

int main(){
	ClapTrap c1( "soldierA" ), c2( "soldierB" ), c3( "soldierC" );

	c1.attack( "soldierB" );
	c2.takeDamage( 2 );
	c1.takeDamage( 12 );
	c1.attack( "soldierC" );
	c1.takeDamage( 3 );
	c2.takeDamage( 0 );
	c3.takeDamage( 5 );
	c3.beRepaired( 16 );
	c1.beRepaired( 0 );
	c3.beRepaired( 0 );
}
