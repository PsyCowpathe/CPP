#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main(void)
{
    ScavTrap    a("Oui");
    ScavTrap    b(a);
    FragTrap    c("coucou");

    a.guardGate();
    a.attack("Non");
    a.takeDamage(20);
    a.guardGate();
    c.highFivesGuys();
    c.attack("OUI");
    b.takeDamage(30);
    c.takeDamage(100);
}