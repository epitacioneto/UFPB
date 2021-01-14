//
// Created by epitacio on 03/09/17.
//

#ifndef QUESTAO3_EMPREGADO_H
#define QUESTAO3_EMPREGADO_H
#include <iostream>
#include <string>

class Empregado {

public:
    Empregado(std::string nome, std::string sobrenome, double salario);
    ~Empregado();
    void setNome(std::string nome);
    void setSobrenome(std::string sobrenome);
    void setSalario(double salario);
    std::string getNome();
    std::string getSobrenome();
    double getSalario();
    double salarioAnual(double salario);
    double aumento(double salario);

private:
    std::string nome, sobrenome;
    double salario;

};


#endif //QUESTAO3_EMPREGADO_H
