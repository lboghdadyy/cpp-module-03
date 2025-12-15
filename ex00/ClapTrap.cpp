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


ClapTrap::ClapTrap(const ClapTrap& obj)
{
    this->Name = obj.Name;
    this->HitPoint = obj.HitPoint;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    std::cout << "A constructor was called for the object with the name " << this->Name << std::endl;
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
    if ( (long)this->HitPoint - (long)amount < 0)
    {
        std::cout << "invalid amount in Damage\n";
        return ;
    }
    if (this->HitPoint == 0)
    {
        std::cout << this->Name << " Can't take himself no hit points left." << std::endl;
        return ;
    }
    if (this->EnergyPoints == 0)
    {
        std::cout << this->Name << " Can't repair himself no energy points left." << std::endl;
        return ;
    }
    else
    {
        this->HitPoint -= amount;
        std::cout << this->Name << " took " << amount << " damage." << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if ( this->HitPoint + amount < amount)
    {
        std::cout << "invalid amount in berepaired\n";
        return ;
    }
    if (this->HitPoint == 0)
    {
        std::cout << this->Name << " Can't repair himself no hit points left." << std::endl;
        return ;
    }
    if (this->EnergyPoints == 0)
    {
        std::cout << this->Name << " Can't repair himself no energy points left." << std::endl;
        return ;
    }
    else
    {
        std::cout << this->Name << " repaired his Hitpoint with " << amount << std::endl;
        this->HitPoint += amount;
        this->EnergyPoints--;
    }
}



