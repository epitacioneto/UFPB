//
// Created by epitacio on 03/09/17.
//

#include "Empregado.h"

Empregado::Empregado(std::string nome, std::string sobrenome, double salario) {

}


Empregado::~Empregado() {

}

void Empregado::setNome(std::string nome) {
    this->nome = nome;

}

void Empregado::setSobrenome(std::string sobrenome) {
    this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario) {
    this->salario = salario;

}

std::string Empregado::getNome() {
    return this->nome;

}

std::string Empregado::getSobrenome() {
    return this->sobrenome;

}

double Empregado::getSalario() {
    return this->salario;
}

double Empregado::salarioAnual(double salario) {

    return salario * 12;
}

double Empregado::aumento(double salario) {
    double percent;

    percent = salario * 0.1;
    return (salario + percent) * 12;
}