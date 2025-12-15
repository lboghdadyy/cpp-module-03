# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    ClapTrap::Name = "_default_clap_name";
    this->name = "_default";
     this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string nom)
{
    this->name = nom;
    nom += "_clap_name";
    ClapTrap::Name = nom;
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = 30;
    std::cout << "A parametrized constructor for DiamondTrap was called\n";
}

std::string DiamondTrap::GetName(){return (this->name);}

DiamondTrap::DiamondTrap(DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
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
    std::cout << "I am \"" << this->name << "\" and my ClapTrap name is -> \"" << ClapTrap::Name << "\"\n";
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}