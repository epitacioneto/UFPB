//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO3_FUNCIONARIO_H
#define QUESTAO3_FUNCIONARIO_H
#include <iostream>

class Funcionario {
public:
    Funcionario();
    virtual ~Funcionario();
    void setNome(std::string nome);
    void setMatricula(int matricula);
    std::string getNome();
    int getMatricula();
    double calculaSalario();
private:
    std::string nome;
    int matricula;

};


#endif //QUESTAO3_FUNCIONARIO_H
