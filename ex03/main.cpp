#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <limits.h>
int main()
{
    DiamondTrap test("nn");
    
    test.beRepaired(INT_MAX);
    
    return 0;
}
