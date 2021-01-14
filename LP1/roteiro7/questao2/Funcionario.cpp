//
// Created by epitacio on 28/09/17.
//

#include "Funcionario.h"

Funcionario::Funcionario() {

}

Funcionario::~Funcionario() {

}

void Funcionario::setNome(std::string nome) {
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula) {
    this->matricula = matricula;
}

void Funcionario::setSalario(double salario) {
    this->salario = salario;
}

int Funcionario::getMatricula() {
    return matricula;
}

std::string Funcionario::getNome() {
    return nome;
}

double Funcionario::getSalario() {
    return salario;
}