# include "ClapTrap.hpp"

int main()
{
    ClapTrap object1("Baghdadi");
    ClapTrap object2("Farah");
    ClapTrap object3("FatMizzo");
    ClapTrap object4(object2);

    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.beRepaired(20);
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object1.attack("Oufarah");
    object2.takeDamage(3);
}