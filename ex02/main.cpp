#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(){
	FragTrap	trap1;
	std::cout << trap1 << std::endl;
	
	FragTrap	trap2("trap2");
	std::cout << trap2 << std::endl;

	FragTrap	trap3("FragTrap3");
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
	trap3.highFiveGuys();
}
