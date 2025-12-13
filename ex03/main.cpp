#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // std::cout << "\n========== CLAPTRAP TEST ==========\n";
    // ClapTrap c1;
    // ClapTrap c2("ClapParam");

    // c1.attack("enemy1");
    // c2.takeDamage(5);
    // c2.beRepaired(3);

    // std::cout << "\n========== SCAVTRAP TEST ==========\n";
    // ScavTrap s1;
    // ScavTrap s2("ScavParam");

    // s1.attack("enemy2");
    // s1.guardGate();
    // s2.takeDamage(20);
    // s2.beRepaired(10);

    // std::cout << "\n========== FRAGTRAP TEST ==========\n";
    // FragTrap f1;
    // FragTrap f2("FragParam");

    // f1.attack("enemy3");
    // f1.highFivesGuys();
    // f2.takeDamage(30);
    // f2.beRepaired(15);

    std::cout << "\n========== DIAMONDTRAP TEST ==========\n";
    DiamondTrap d1("l7way");
    DiamondTrap d2("lm7wi");
    d2 = d1;
    // d1.whoAmI();
    d2.whoAmI();
    // DiamondTrap d2("DiamondParam");

    // attack must come from ScavTrap
    // d1.attack("boss");
    // d2.attack("mega boss");

    // // specific DiamondTrap behavior
    // d1.whoAmI();
    // d2.whoAmI();

    // // inherited behaviors
    // d2.takeDamage(40);
    // d2.beRepaired(25);

    // std::cout << "\n========== COPY CONSTRUCTOR TEST ==========\n";
    // DiamondTrap d3(d2);
    // d3.whoAmI();
    // d3.attack("copy enemy");

    // std::cout << "\n========== ASSIGNMENT OPERATOR TEST ==========\n";
    // DiamondTrap d4;
    // d4 = d1;
    // d4.whoAmI();
    // d4.attack("assigned enemy");

    std::cout << "\n========== DESTRUCTION ORDER ==========\n";
    return 0;
}
