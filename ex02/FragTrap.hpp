#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : ClapTrap{
public:
  FragTrap();
  FragTrap(const std::string& name);
  FragTrap(const FragTrap&);
  ~FragTrap();
  FragTrap& operator=(const FragTrap&);

  void	highFiveGuys(void) const;
};
