//
// Created by epitacio on 20/11/17.
//

#ifndef TESTE_VERDE_H
#define TESTE_VERDE_H

#include "Cor.h"

class Verde : public Cor {
public:
    Verde();
    virtual ~Verde();
    int getVerde();
    void setVerde(int codigo);
private:
    int codigo;
};


#endif //TESTE_VERDE_H
