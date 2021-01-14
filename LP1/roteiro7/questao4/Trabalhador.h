//
// Created by epitacio on 28/09/17.
//

#ifndef QUESTAO4_TRABALHADOR_H
#define QUESTAO4_TRABALHADOR_H

#include <iostream>

class Trabalhador {
public:
    Trabalhador();
    virtual ~Trabalhador();
    virtual void setNome(std::string nome) = 0;
    virtual void setSalario(double salario) = 0;
    std::string getNome();
    double getSalario();

private:
    std::string nome;
    double salario;
    int horas;

};


#endif //QUESTAO4_TRABALHADOR_H
