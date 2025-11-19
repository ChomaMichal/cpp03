#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond trap " << this->ScavTrap::getName() << " is unundead" << std::endl;
}

DiamondTrap::DiamondTrap(): ScavTrap("hehe_clap_name"){
	this->ScavTrap::setHp(100);
	this->ScavTrap::setEnergy(100);
	this->ScavTrap::setPower(30);
	std::cout << "Diamond trap " << this->ScavTrap::getName() << " is undead" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), _name(name){
	this->ScavTrap::setHp(100);
	this->ScavTrap::setEnergy(100);
	this->ScavTrap::setPower(30);
	std::cout << "Diamond trap " << this->ScavTrap::getName() << " is undead" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap)
	: ScavTrap(trap.ScavTrap::name + "_clap_name"), _name(trap.ScavTrap::name){
	this->ScavTrap::setHp(100);
	this->ScavTrap::setEnergy(100);
	this->ScavTrap::setPower(30);
	std::cout << "Diamond trap " << this->ScavTrap::getName() << " is undead" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& trap){
	this->ScavTrap::setName(trap.ScavTrap::getName());
	this->ScavTrap::setHp(trap.ScavTrap::getHp());
	this->ScavTrap::setEnergy(trap.ScavTrap::getEnergy());
	this->ScavTrap::setPower(trap.ScavTrap::getPower());
	std::cout << "Diamond trap " << this->ScavTrap::getName() << " is equaled" << std::endl;
	return (*this);
}
