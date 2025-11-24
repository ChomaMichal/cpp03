#pragma once

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public ClapTrap, virtual public ScavTrap, virtual public FragTrap {
public:
  DiamondTrap(const std::string& name);
  ~DiamondTrap();
  void whoAmI(void) const;
  DiamondTrap& operator=(const DiamondTrap& obj);

private:
	std::string		name;
	DiamondTrap();
	DiamondTrap(const DiamondTrap& obj);
};
