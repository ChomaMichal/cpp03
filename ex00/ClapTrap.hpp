#ifndef CLAPTRAP
#define CLAPTRAP
#include <string>
#include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(ClapTrap &trap);
		ClapTrap& operator=(ClapTrap& trap);
		ClapTrap(const std::string& name);
		~ClapTrap();
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void)const;
		int				getHp(void)const;
		int				getEnergy(void)const;
		int				getPower(void)const;
	
	private:
		std::string	name;
		int			hp;
		int			energy;
		int			power;
};

std::ostream&	operator<<(std::ostream &os,const ClapTrap &trap);

#endif
