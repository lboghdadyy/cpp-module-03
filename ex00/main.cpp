# include "ClapTrap.hpp"

int main()
{
    ClapTrap object1("Baghdadi");
    ClapTrap object2(object1);

    object1.attack("Oufarah");
    // object1.takeDamage(147483647);
    object1.attack("Oufarah");
    // object1.beRepaired(-6486457684);
    object1.attack("Oufarah");
    object1.beRepaired(20);
    object1.attack("Oufarah");
    object1.beRepaired(20);
    object1.attack("Oufarah");
    object2.takeDamage(3);
}