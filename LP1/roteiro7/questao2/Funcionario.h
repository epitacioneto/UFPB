//
// Created by epitacio on 28/09/17.
//

#ifndef QUESTAO2_FUNCIONARIO_H
#define QUESTAO2_FUNCIONARIO_H
#include <iostream>

class Funcionario {
public:
    Funcionario();
    virtual ~Funcionario();
    void setMatricula(int matricula);
    void setSalario(double salario);
    void setNome(std::string nome);
    int getMatricula();
    virtual double getSalario() = 0;
    std::string getNome();

private:
    int matricula;
    double salario;
    std::string nome;
};


#endif //QUESTAO2_FUNCIONARIO_H
