# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    SetName("");
    SetHitPoints(100);
    SetEnergyPoints(50);
    SetAttackDamage(20);
    std::cout << "A default constructor for ScavTrap was called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj)
{
    SetName(obj.GetName());
    SetHitPoints(obj.GetHitPoints());
    SetEnergyPoints(obj.GetEnergyPoints());
    SetAttackDamage(obj.GetAttackDamage());
    std::cout << "A constructor was called for the object with the name " << GetName() << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
    SetName(Name);
    SetHitPoints(100);
    SetEnergyPoints(50);
    SetAttackDamage(20);
    std::cout << "A constructor for ScavTrap was called for the object with the name " << GetName() << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "A destructor was called for a ScavTrap object with the name " << GetName() << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap& obj)
{
    SetName(obj.GetName());
    SetHitPoints(obj.GetHitPoints());
    SetEnergyPoints(obj.GetEnergyPoints());
    SetAttackDamage(obj.GetAttackDamage());
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (GetEnergyPoints() <= 0)
    {
        std::cout << GetName() << "ScavTrap Can't attack " << target << " no energy points left." << std::endl;
        return ;
    }
    else
    {
        std::cout << GetName() << " Attacked " << target << "." << std::endl;
        SetEnergyPoints(GetEnergyPoints() - 1);
    }
}

void    ScavTrap::guardGate()
{
    std :: cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}