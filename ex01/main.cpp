#include "ClapTrap.hpp"

int main(){
	ClapTrap	trap1;
	std::cout << trap1 << std::endl;
	
	ClapTrap	trap2("trap2");
	std::cout << trap2 << std::endl;

	ClapTrap	trap3(trap2);
	std::cout << trap3 << std::endl;

	for (int i = 0; i < 15; i ++){
		trap2.attack("hehe");
		std::cout << trap2 << std::endl;
	}

	for (int i = 0; i < 15; i ++){
		trap1.takeDamage(2);
		std::cout << trap1 << std::endl;
	}

	for (int i = 0; i < 15; i ++){
		trap3.beRepaired(2);
		std::cout << trap3 << std::endl;
	}
}
