#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria	*_inventory[4];
		int			_invSize;
	public:
		Character();
		Character(std::string name);
		Character(const Character & src);
		Character & operator=(const Character & src);
		~Character();

		std::string const & getName() const;
		AMateria * getMateria(int id) const;
		int	getInvSize() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
