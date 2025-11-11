#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->setHp(100);
	this->setEnergy(100);
	this->setPower(30);
	std::cout << "Frag trap " << this->getName() << " is undead" << std::endl;
}

FragTrap::FragTrap(const std::string& name){
	this->setName(name);
	this->setHp(100);
	this->setEnergy(100);
	this->setPower(30);
	std::cout << "Frag trap " << this->getName() << " is undead" << std::endl;
}

FragTrap::FragTrap(const FragTrap& trap){
	this->setName(trap.getName());
	this->setHp(100);
	this->setEnergy(100);
	this->setPower(30);
	std::cout << "Frag trap " << this->getName() << " is undead" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& trap){
	this->setName(trap.getName());
	this->setHp(trap.getHp());
	this->setEnergy(trap.getEnergy());
	this->setPower(trap.getPower());
	std::cout << "Frag trap " << this->getName() << " is equaled" << std::endl;
	return (*this);
}

void	FragTrap::highFiveGuys(void)const{
	std::cout << "FragTrap " << this->getName()
		<< " is displaying positive message on stdout" << std::endl;
}
