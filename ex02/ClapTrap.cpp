# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "";
    this->HitPoint = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "A default constructor for ClapTrap was called" << std::endl;

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
    std::cout << "A destructor was called for Claptrap object with the name " << this->Name << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& obj)
{
    this->Name = obj.Name;
    this->HitPoint = obj.HitPoint;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    std::cout << "A copy constructor was called for an ClapTrap object with the name " << this->Name << std::endl;
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
    if (this->EnergyPoints == 0 || this->HitPoint == 0)
    {
        std::cout << this->Name << " Can't attack " << target << " no energy points left." << std::endl;
        return ;
    }
    else
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!\n";
        this->EnergyPoints--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if ((signed)this->HitPoint - (signed)amount < 0)
        this->HitPoint = 0;
    else
        this->HitPoint -= amount;
    std::cout << this->Name << " took " << amount << " damage." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints <= 0 || this->HitPoint <= 0 )
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

