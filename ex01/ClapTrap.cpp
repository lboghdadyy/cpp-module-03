# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "";
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "A default constructor was called" << std::endl;

}

ClapTrap::ClapTrap(std::string Name)
{
    this->Name = Name;
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "A constructor was called for the object with the name " << this->Name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "A destructor was called for the object with the name " << this->Name << std::endl;
}


ClapTrap::ClapTrap(ClapTrap& obj)
{
    this->Name = obj.Name;
    this->HitPoint = obj.HitPoint;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    std::cout << "A constructor was called for the object with the name " << this->Name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &obj)
{
    this->Name = obj.Name;
    this->HitPoint = obj.HitPoint;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->Name << " Can't attack " << target << " no energy points left." << std::endl;
        return ;
    }
    else
    {
        std::cout << this->Name << " Attacked " << target << "." << std::endl;
        this->EnergyPoints--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->AttackDamage += amount;
    std::cout << this->Name << " took " << amount << " damage." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints <= 0)
    {
        std::cout << this->Name << " Can't repair himself no energy points left." << std::endl;
        return ;
    }
    else
    {
        std::cout << this->Name << " repaired himself." << std::endl;
        this->HitPoint += amount;
        this->EnergyPoints--;
    }
}
