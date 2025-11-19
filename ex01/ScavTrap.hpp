#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap{
public:
  ScavTrap();
  ScavTrap(const std::string& name);
  ScavTrap(const ScavTrap&);
  ~ScavTrap();
  ScavTrap& operator=(const ScavTrap&);
  
  void	attack(const std::string& target);

  void	guardGate(void) const;
};
