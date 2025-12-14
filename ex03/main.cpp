#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap test("nn");

    DiamondTrap s(test);

    s.whoAmI();
    return 0;
}
