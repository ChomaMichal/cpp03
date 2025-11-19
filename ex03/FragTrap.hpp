#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual  public ClapTrap{
public:
  FragTrap();
  FragTrap(const std::string& name);
  FragTrap(const FragTrap&);
  virtual ~FragTrap();
  FragTrap&	operator=(const FragTrap&);

  void	highFiveGuys(void) const;
};
