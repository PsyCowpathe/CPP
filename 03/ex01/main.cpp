#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    ScavTrap    a("Oui");
    ScavTrap    b(a);

    a.guardGate();
    a.attack("Non");
	a.takeDamage(10);
	b = a;
    b.takeDamage(20);
	ScavTrap c(b);
    a.guardGate();
	b.beRepaired(30);
}
