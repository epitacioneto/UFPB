//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO3_ASSALARIADO_H
#define QUESTAO3_ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario {
public:
    Assalariado();
    virtual ~Assalariado();
    double calcularSalario();
    void setSalario(double salario);
    double getSalario();
private:
    double salario;

};


#endif //QUESTAO3_ASSALARIADO_H
