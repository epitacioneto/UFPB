//
// Created by epitacio on 20/11/17.
//

#ifndef TESTE_AZUL_H
#define TESTE_AZUL_H

#include "Cor.h"
class Azul : public Cor {
public:
    Azul();
    virtual ~Azul();
    int getAzul();
    void setAzul(int codigo);
private:
    int codigo;

};


#endif //TESTE_AZUL_H
