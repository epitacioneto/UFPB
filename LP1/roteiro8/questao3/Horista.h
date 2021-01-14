//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO3_HORISTA_H
#define QUESTAO3_HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario {
public:
    Horista();
    virtual ~Horista();
    double calcularSalario();
    void setSalarioPorHora(double salarioPorHora);
    void setHorasTrabalhadas(double horasTrabalhadas);
    double getSalarioPorHora();
    double getHorasTrabalhadas();
private:
    double salarioPorHora, horasTrabalhadas;

};


#endif //QUESTAO3_HORISTA_H
