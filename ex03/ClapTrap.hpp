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
		virtual ~ClapTrap();
		virtual void		attack(const std::string& target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);
		virtual std::string	getName(void)const;
		virtual int			getHp(void)const;
		virtual int			getEnergy(void)const;
		virtual int			getPower(void)const;
		virtual void		setName(const std::string& name);
		virtual void		setHp(int nb);
		virtual void		setEnergy(int nb);
		virtual void		setPower(int nb);

	protected:
		std::string	name;
		int			hp;
		int			energy;
		int			power;
};

std::ostream&	operator<<(std::ostream &os,const ClapTrap &trap);

#endif
