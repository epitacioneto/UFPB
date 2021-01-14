//
// Created by epitacio on 28/09/17.
//

#ifndef QUESTAO2_CONSULTOR_H
#define QUESTAO2_CONSULTOR_H
#include "Funcionario.h"


class Consultor : public Funcionario {
public:
    Consultor();
    virtual ~Consultor();
    virtual double getSalario();
    double getSalario(double percentual);
private:
    double salario;

};


#endif //QUESTAO2_CONSULTOR_H
