#include "../headers/MateriaSource.hpp"


MateriaSource::MateriaSource(){
    for(int i=0; i< 4 ;i++){
        learnedMaterias[i] = NULL;
    }
}
MateriaSource::MateriaSource(MateriaSource const & copy){

    for (int i = 0; i < 4; i++){
        if(copy.learnedMaterias[i])
            learnedMaterias[i] = copy.learnedMaterias[i]->clone();
        else
            learnedMaterias[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const & copy){
    if(this != &copy)
    {
        for (int i = 0; i < 4; i++){
            if(learnedMaterias[i]){

                delete learnedMaterias[i];
                learnedMaterias[i] = NULL;
            }
        }

        for (int i = 0; i < 4; i++){
            if (learnedMaterias[i])
                learnedMaterias[i] = copy.learnedMaterias[i]->clone();
            else learnedMaterias[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m){
    if(!m)
        return ;
    for(int i=0;i < 4; i++){
        if(!learnedMaterias[i]){
            learnedMaterias[i] = m->clone();
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    if(type.empty())
        return NULL;
    for(int i= 0; i < 4 ;i++){
        if(learnedMaterias[i] && type == learnedMaterias[i]->getType())
            return (learnedMaterias[i]->clone());
    }
    return NULL;
}


MateriaSource::~MateriaSource(){
    for (int i = 0;i < 4 ; i++){
        if(learnedMaterias[i])
            delete learnedMaterias[i];
    }
}