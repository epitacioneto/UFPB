//
// Created by epitacio on 24/10/17.
//

#ifndef QUESTAO1_CONTAESPECIAL_H
#define QUESTAO1_CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta {
public:
    ContaEspecial();
    virtual ~ContaEspecial();
    void setValor(double valor);
    double getValor();
    void definirLimite();
    void sacar(double valor);
    void depositar(double valor);

private:
    double valor;


};


#endif //QUESTAO1_CONTAESPECIAL_H
