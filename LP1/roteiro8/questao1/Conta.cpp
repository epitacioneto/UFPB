//
// Created by epitacio on 24/10/17.
//

#include "Conta.h"

Conta::Conta() {

}

Conta::Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo) {

}

Conta::~Conta() {

}

void Conta::setLimite(double limite) {
    this->limite = limite;
}

void Conta::setNomeCliente(std::string nomeCliente) {
    this->nomeCliente = nomeCliente;
}

void Conta::setNumeroConta(std::string numeroConta) {
    this->numeroConta = numeroConta;
}

void Conta::setSalarioMensal(double salarioMensal) {
    this->salarioMensal = salarioMensal;
}

void Conta::setSaldo(double saldo) {
    this->saldo = saldo;
}

double Conta::getLimite() {
    return limite;
}

double Conta::getSalarioMensal() {
    return salarioMensal;
}

double Conta::getSaldo() {
    return saldo;
}

std::string Conta::getNomeCliente() {
    return nomeCliente;
}

std::string Conta::getNumeroConta() {
    return numeroConta;
}

void Conta::definirLimite() {
    limite = salarioMensal * 2;

}