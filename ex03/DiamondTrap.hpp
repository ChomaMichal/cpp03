#pragma once

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public ClapTrap, virtual public ScavTrap, virtual public FragTrap {
public:
  DiamondTrap();
  DiamondTrap(const std::string& name);
  DiamondTrap(const DiamondTrap& obj);
  ~DiamondTrap();

  DiamondTrap& operator=(const DiamondTrap& obj);

private:
	std::string		_name;
};
