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

std::string ClapTrap::GetName(void)
{
    return (this->Name);
}

int ClapTrap::ClapTrap::GetHitPoints(void)
{
    return (this->HitPoint);
}

int ClapTrap::GetEnergyPoints(void)
{
    return (this->EnergyPoints);
}

int ClapTrap::GetAttackDamage(void)
{
    return (this->AttackDamage);
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
    this->Name = obj.GetName();
    this->HitPoint = obj.GetHitPoints();
    this->EnergyPoints = obj.GetEnergyPoints();
    this->AttackDamage = obj.GetAttackDamage();
    std::cout << "A constructor was called for the object with the name " << this->Name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &obj)
{
    this->Name = obj.GetName();
    this->HitPoint = obj.GetHitPoints();
    this->EnergyPoints = obj.GetEnergyPoints();
    this->AttackDamage = obj.GetAttackDamage();
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

