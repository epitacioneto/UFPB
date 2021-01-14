//
// Created by epitacio on 20/11/17.
//

#ifndef TESTE_PRETO_H
#define TESTE_PRETO_H

#include "Cor.h"

class Preto : public Cor {
private:
    Preto();
    virtual ~Preto();
    int getPreto();
    void setPreto(int codigo);
public:
    int codigo;

};


#endif //TESTE_PRETO_H
