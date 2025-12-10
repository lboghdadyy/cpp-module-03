# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    SetName("");
    SetHitPoints(100);
    SetEnergyPoints(100);
    SetAttackDamage(30);
    std::cout << "A default constructor for FragTrap was called" << std::endl;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj)
{
    SetName(obj.GetName());
    SetHitPoints(obj.GetHitPoints());
    SetEnergyPoints(obj.GetEnergyPoints());
    SetAttackDamage(obj.GetAttackDamage());
    std::cout << "A constructor was called for the object with the name " << GetName() << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
    SetName(Name);
    SetHitPoints(100);
    SetEnergyPoints(100);
    SetAttackDamage(30);
    std::cout << "A constructor for FragTrap was called for the object with the name " << GetName() << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "A destructor was called for a FragTrap object with the name " << GetName() << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap& obj)
{
    SetName(obj.GetName());
    SetHitPoints(obj.GetHitPoints());
    SetEnergyPoints(obj.GetEnergyPoints());
    SetAttackDamage(obj.GetAttackDamage());
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap requests a positive high five!" << std::endl;
}
