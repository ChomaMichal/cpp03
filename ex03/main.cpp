#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	DiamondTrap	trap1("test");

	std::cout << trap1  << std::endl;
	trap1.attack("hehe");
	trap1.guardGate();
	trap1.whoAmI();
}
