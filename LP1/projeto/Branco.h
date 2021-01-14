//
// Created by epitacio on 20/11/17.
//

#ifndef TESTE_BRANCO_H
#define TESTE_BRANCO_H

#include "Cor.h"

class Branco : public Cor {
public:
    Branco();
    virtual ~Branco();
    int getBranco();
    void setBranco(int codigo);
private:
    int codigo;
};


#endif //TESTE_BRANCO_H
