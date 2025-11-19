#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	ScavTrap	trap1;
	std::cout << trap1 << std::endl;
	
	ScavTrap	trap2("trap2");
	std::cout << trap2 << std::endl;

	ScavTrap	trap3("ScavTrap3");
	std::cout << trap3 << std::endl;

	for (int i = 0; i < 120; i ++){
		trap2.attack("hehe");
		std::cout << trap2 << std::endl;
	}

	for (int i = 0; i < 60; i ++){
		trap1.takeDamage(2);
		std::cout << trap1 << std::endl;
	}

	for (int i = 0; i < 150; i ++){
		trap3.beRepaired(2);
		std::cout << trap3 << std::endl;
	}
	trap3.guardGate();
}
