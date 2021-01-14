
//
// Created by epitacio on 03/09/17.
//

#ifndef QUESTAO4_PESSOA_H
#define QUESTAO4_PESSOA_H

#include <iostream>


class Pessoa {

public:
    Pessoa(std::string nome);
    Pessoa(std::string nome, int idade, int telefone);
    ~Pessoa();
    void setNome(std::string nome);
    void setIdade(int idade);
    void setTelefone(int telefone);
    std::string getNome();
    int getIdade();
    int getTelefone();

private:
    std::string nome;
    int idade, telefone;

};


#endif //QUESTAO4_PESSOA_H
