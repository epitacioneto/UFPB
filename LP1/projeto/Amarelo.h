//
// Created by epitacio on 20/11/17.
//

#ifndef TESTE_AMARELO_H
#define TESTE_AMARELO_H

#include "Cor.h"
class Amarelo : public Cor {
public:
    Amarelo();
    virtual ~Amarelo();
    int getAmarelo();
    void setAmarelo(int codigo);
private:
    int codigo;
};


#endif //TESTE_AMARELO_H
