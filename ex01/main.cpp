# include "ScavTrap.hpp"

int main()
{
    ClapTrap object1("Baghdadi");
    ClapTrap object2(object1);

    ScavTrap obj("Scaftrap");
    obj.guardGate();
    obj.attack("le moii");
    obj.beRepaired(1);

    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.beRepaired(20);
    object1.attack("Oufarah");
    object2.takeDamage(3);
}