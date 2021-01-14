//
// Created by epitacio on 28/09/17.
//

#ifndef QUESTAO4_TRABALHADORPORHORA_H
#define QUESTAO4_TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador {
public:
    TrabalhadorPorHora();
    virtual ~TrabalhadorPorHora();
    void setNome(std::string nome);
    void setSalario(double salario);
    double calcularPagamento(int horas);

private:
    std::string nome;
    double salario;
};


#endif //QUESTAO4_TRABALHADORPORHORA_H
