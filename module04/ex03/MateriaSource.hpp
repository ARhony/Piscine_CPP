#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria*	_formula[4];
		std::string	_formulaName[4];
		int			_forSize;
	public :
		MateriaSource();
		MateriaSource(const MateriaSource & src);
		MateriaSource & operator=(const MateriaSource & src);
		~MateriaSource();

		void learnMateria(AMateria* mat);
		AMateria* createMateria(std::string const & type);
};

#endif
