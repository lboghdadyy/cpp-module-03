# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_default_clap_name") ,name("_default")
{
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string Name)
{
    this->name = Name;
    Name += "_clap_name";
    ClapTrap::Name = Name;
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "parametrized constructor for DiamondTrap was called\n";
}

std::string DiamondTrap::GetName(){return (this->name);}

DiamondTrap::DiamondTrap(DiamondTrap &obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj)
{
    std::cout << "copy constructor for DiamondTrap was called\n";
    this->name = obj.GetName();
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
    *this = obj;
    return (*this);
}

DiamondTrap::~DiamondTrap(){}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "I am " << this->name << "and my ClapTrap name is ->" << ClapTrap::Name << '\n';
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}