#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->setHp(100);
	this->setEnergy(50);
	this->setPower(20);
	std::cout << "Scav trap " << this->getName() << " is undead" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name){
	this->setName(name);
	this->setHp(100);
	this->setEnergy(50);
	this->setPower(20);
	std::cout << "Scav trap " << this->getName() << " is undead" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& trap){
	this->setName(trap.getName());
	this->setHp(100);
	this->setEnergy(50);
	this->setPower(20);
	std::cout << "Scav trap " << this->getName() << " is undead" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& trap){
	this->setName(trap.getName());
	this->setHp(trap.getHp());
	this->setEnergy(trap.getEnergy());
	this->setPower(trap.getPower());
	std::cout << "Scav trap " << this->getName() << " is equaled" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate(void)const{
	std::cout << "ScavTrap " << this->getName() << " is now guarding" << std::endl;
}
