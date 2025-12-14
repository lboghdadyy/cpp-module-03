# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->Name = "";
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "A default constructor for FragTrap was called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    this->Name = obj.Name;
    this->HitPoint = obj.HitPoint;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    std::cout << "A copy constructor for FragTrap was called -> " << Name << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
    this->Name = Name;
    this->HitPoint = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "A constructor for FragTrap was called for the object with the name " << Name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "A destructor was called for a FragTrap object with the name " << Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& obj)
{
    this->Name = obj.Name;
    this->HitPoint = obj.HitPoint;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << Name << " requests a positive high five!" << std::endl;
}
