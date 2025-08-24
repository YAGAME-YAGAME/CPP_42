#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

    private:
        AMateria * learnedMaterias[4];
        
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & copy);
        MateriaSource& operator=(MateriaSource const & copy);
        virtual ~MateriaSource();

        virtual void learnMateria(AMateria* m) ;
        virtual AMateria* createMateria(std::string const & type) ;
};


#endif