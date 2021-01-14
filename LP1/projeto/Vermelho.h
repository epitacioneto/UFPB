//
// Created by epitacio on 20/11/17.
//

#ifndef TESTE_VERMELHO_H
#define TESTE_VERMELHO_H

#include "Cor.h"

class Vermelho : public Cor {
public:
    Vermelho();
    ~Vermelho();
    int getVermelho();
    void setVermelho(int codigo);
private:
    int codigo;
};


#endif //TESTE_VERMELHO_H
