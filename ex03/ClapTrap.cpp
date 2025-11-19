#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name("hehe"), hp(10), energy(10), power(10)
{
	std::cout << "Clap trap " << this->name << " is undead" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& trap)
	:name(trap.name), hp(10), energy(10), power(10)
{
	std::cout << "Clap trap " << this->name << " is undead" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& trap){
	this->name = trap.name;
	this->hp = trap.hp;
	this->energy = trap.energy;
	this->power = trap.power;
	std::cout << "Clap trap " << this->name << " is equaled" << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(const std::string& name)
	: name(name), hp(10), energy(10), power(10)
{
	std::cout << "Clap trap " << this->name << " is undead" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Clap trap " << this->name << " is unundead" << std::endl;
}

void ClapTrap::attack(const std::string& name){
	if (this->hp <= 0){
		std::cout << this << " is dead" << std::endl;
		return ;
	}
	if (this->energy == 0){
		std::cout << "Out of energy" << std::endl;
		return ;
	}
	this->energy --;
	std::cout << "ClapTrap "<< this->name<<"  attacks "<< name
		<<", causing "<< this->power <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hp <= 0){
		std::cout << this << " is dead" << std::endl;
		return ;
	}
	this->hp -= amount;
	std::cout << "ClapTrap has taken" << amount << " of dmg" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->hp <= 0){
		std::cout << this << " is dead" << std::endl;
		return ;
	}
	if (this->energy == 0){
		std::cout << "Out of energy" << std::endl;
		return ;
	}
	this->energy --;
	this->hp += amount;
	std::cout << "ClapTrap " << this->name << " has untaken" << amount << " of dmg" << std::endl;
}

std::string	ClapTrap::getName(void)const{
	return (this->name);
}

int		ClapTrap::getHp(void)const{
	return (this->hp);
}

int		ClapTrap::getEnergy(void)const{
	return (this->energy);
}

int		ClapTrap::getPower(void)const{
	return (this->power);
}

void	ClapTrap::setName(const std::string& name){
	this->name = name;
}

void	ClapTrap::setEnergy(const int nb){
	this->energy= nb;
}

void	ClapTrap::setHp(const int nb){
	this->hp= nb;
}

void	ClapTrap::setPower(const int nb){
	this->power = nb;
}

std::ostream	&operator<<(std::ostream &os, const ClapTrap &trap){
	return (os << "Trap name: " << trap.getName() << " dmg " << trap.getPower() <<  " hp "
		<< trap.getHp() << " energy " << trap.getEnergy());
}
