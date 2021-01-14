//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO2_ENDERECO_H
#define QUESTAO2_ENDERECO_H
#include <iostream>

class Endereco {
public:
    Endereco();
    virtual ~Endereco();
    std::string getLogradouro();
    std::string getBairro();
    std::string getCidade();
    std::string getCep();
    void setLogradouro(std::string logradouro);
    void setBairro(std::string bairro);
    void setCidade(std::string cidade);
    void setCep(std::string cep);
    void setNumero(int numero);
    int getNumero();
private:
    std::string logradouro, bairro, cidade, cep;
    int numero;


};


#endif //QUESTAO2_ENDERECO_H
