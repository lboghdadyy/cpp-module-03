# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    Name = "";
    HitPoint = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "A default constructor for ScavTrap was called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj)
{
    this->Name = obj.Name;
    HitPoint = obj.HitPoint;
    EnergyPoints = obj.EnergyPoints;  
    AttackDamage = obj.AttackDamage;
    std::cout << "A copy constructor for ScavTrap was called -> " << Name << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
    this->Name = Name;
    HitPoint = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "A constructor for ScavTrap was called ->" << this->Name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "A destructor was called for a ScavTrap object with the name " << this->Name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap& obj)
{
    this->Name = obj.Name;
    HitPoint = obj.HitPoint;
    EnergyPoints = obj.EnergyPoints;  
    AttackDamage = obj.AttackDamage;
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (EnergyPoints <= 0)
    {
        std::cout << this->Name << "ScavTrap Can't attack " << target << " no energy points left." << std::endl;
        return ;
    }
    else
    {
        std::cout << this->Name << " Attacked " << target << "." << std::endl;
        EnergyPoints--;
    }
}

void    ScavTrap::guardGate()
{
    std :: cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}
