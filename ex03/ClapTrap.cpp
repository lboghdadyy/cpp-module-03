# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "";
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "A default constructor was called for ClapTrap" << std::endl;

}

ClapTrap::ClapTrap(std::string Name)
{
    this->Name = Name;
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "A constructor was called for an ClapTrap object" << this->Name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "A destructor was called for an ClapTrap object " << this->Name << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& obj)
{
    *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
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
        std::cout << this->Name << " Claptrap Can't attack " << target << " no energy points left." << std::endl;
        return ;
    }
    else
    {
        std::cout << "A Claptrap " << this->Name << " Attacked " << target << "." << std::endl;
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
