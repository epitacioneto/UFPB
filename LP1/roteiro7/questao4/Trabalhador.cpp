//
// Created by epitacio on 28/09/17.
//

#include "Trabalhador.h"

Trabalhador::Trabalhador() {

}

Trabalhador::~Trabalhador() {

}

void Trabalhador::setNome(std::string nome) {
    this->nome = nome;
}

void Trabalhador::setSalario(double salario) {
    this->salario = salario;
}

std::string Trabalhador::getNome() {
    return nome;
}

double Trabalhador::getSalario() {
    return salario;
}