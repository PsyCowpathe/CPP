#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    ScavTrap    a("Oui");
    ScavTrap    b(a);

    a.guardGate();
    a.attack("Non");
    b.takeDamage(20);
    a.guardGate();
}