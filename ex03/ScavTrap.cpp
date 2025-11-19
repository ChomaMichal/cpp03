#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(){
	std::cout << "Scav trap " << this->getName() << " is unundead" << std::endl;
}

ScavTrap::ScavTrap(){
	this->setHp(100);
	this->setEnergy(50);
	this->setPower(20);
	std::cout << "Scav trap " << this->getName() << " is undead" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name){
	this->setHp(100);
	this->setEnergy(50);
	this->setPower(20);
	std::cout << "Scav trap " << this->getName() << " is undead" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& trap): ClapTrap(trap.getName()) {
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

void	ScavTrap::attack(const std::string& name){
	if (this->hp <= 0){
		std::cout << this->name << " is dead" << std::endl;
		return ;
	}
	if (this->energy == 0){
		std::cout << this->name << "is out of energy" << std::endl;
		return ;
	}
	this->energy --;
	std::cout << "ScavTrap "<< this->name<<"  attacks "<< name
		<<", causing "<< this->power <<" points of damage!" << std::endl;
}
