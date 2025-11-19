#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap :virtual public ClapTrap{
public:
  ScavTrap();
  ScavTrap(const std::string& name);
  ScavTrap(const ScavTrap&);
  virtual ~ScavTrap();
  ScavTrap& operator=(const ScavTrap&);
  
  void	attack(const std::string& target);

  void	guardGate(void) const;
};
