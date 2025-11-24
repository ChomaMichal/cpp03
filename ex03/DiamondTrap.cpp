#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond trap " << this->getName() << " is unundead" << std::endl;
}

DiamondTrap::DiamondTrap(): ScavTrap("hehe_clap_name"){
	this->setHp(100);
	this->setEnergy(50);
	this->setPower(30);
	std::cout << "Diamond trap " << this->getName() << " is undead" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), name(name){
	this->setHp(100);
	this->setEnergy(50);
	this->setPower(30);
	std::cout << "Diamond trap " << this->getName() << " is undead" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap)
	: ScavTrap(trap.name + "_clap_name"),
	name(trap.name){
	this->setHp(100);
	this->setEnergy(50);
	this->setPower(30);
	std::cout << "Diamond trap " << this->getName() << " is undead" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& trap){
	this->setName(trap.getName());
	this->setHp(trap.getHp());
	this->setEnergy(trap.getEnergy());
	this->setPower(trap.getPower());
	std::cout << "Diamond trap " << this->getName() << " is equaled" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const{
	std::cout << "name: " << name << "\nclap trap name "
		<< ClapTrap::name << std::endl;
}
