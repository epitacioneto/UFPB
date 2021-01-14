//
// Created by epitacio on 24/10/17.
//

#ifndef QUESTAO1_CONTA_H
#define QUESTAO1_CONTA_H

#include "IConta.h"
#include <iostream>

class Conta : public IConta {
public:
    Conta();
    Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo);
    virtual ~Conta();
    void setNomeCliente(std::string nomeCliente);
    void setSalarioMensal(double salarioMensal);
    void setNumeroConta(std::string numeroConta);
    void setSaldo(double saldo);
    void setLimite(double limite);
    std::string getNomeCliente();
    double getSalarioMensal();
    std::string getNumeroConta();
    double getSaldo();
    double getLimite();
    void definirLimite();
private:
    std::string nomeCliente, numeroConta;
    double salarioMensal, saldo, limite;

};


#endif //QUESTAO1_CONTA_H
