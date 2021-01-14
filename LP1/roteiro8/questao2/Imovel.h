//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO2_IMOVEL_H
#define QUESTAO2_IMOVEL_H
#include "Endereco.h"

class Imovel : public Endereco {
public:
    Imovel();
    virtual ~Imovel();
    virtual std::string getDescricao() = 0;
    Endereco getEndereco();
private:
    Endereco endereco;
};


#endif //QUESTAO2_IMOVEL_H
