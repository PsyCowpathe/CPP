#include "ClapTrap.hpp"

int     main(void)
{
    ClapTrap    a("oui");
    ClapTrap    b("non");

    a.attack("non");
    a.attack("non");
    a.attack("non");
    a.attack("non");
    a.attack("non");
    a.attack("non");
    a.attack("non");
    a.attack("non");
    a.attack("non");
    a.attack("non");
    a.attack("non");
    b.takeDamage(9);
    b.beRepaired(10);
    b.attack("oui");
}