# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    Name = "";
    HitPoint = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "A default constructor for ScavTrap was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    this->Name = obj.Name;
    HitPoint = obj.HitPoint;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
    std::cout << "A copy constructor for ScavTrap was called -> " << Name << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->Name = name;
    HitPoint = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "A constructor for ScavTrap was called ->" << this->Name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "A destructor was called for a ScavTrap object with the name " << this->Name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& obj)
{
    Name = obj.Name;
    HitPoint = obj.HitPoint;
    EnergyPoints = obj.EnergyPoints;  
    AttackDamage = obj.AttackDamage;
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoints == 0 || this->HitPoint == 0)
    {
        std::cout << this->Name << " Can't attack " << target << " no energy points left." << std::endl;
        return ;
    }
    else
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!\n";
        this->EnergyPoints--;
    }
}

void    ScavTrap::guardGate()
{
    std :: cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}
