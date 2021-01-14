//
// Created by epitacio on 28/09/17.
//

#ifndef QUESTAO4_TRABALHADORASSALARIADO_H
#define QUESTAO4_TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador {
public:
    TrabalhadorAssalariado();
    virtual ~TrabalhadorAssalariado();
    double calcularPagamento(int horas);
    void setNome(std::string nome);
    void setSalario(double salario);
private:
    std::string nome;
    double salario;
};


#endif //QUESTAO4_TRABALHADORASSALARIADO_H
