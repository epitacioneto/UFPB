//
// Created by epitacio on 28/09/17.
//

#include "Medico.h"

Medico::Medico() {

}

Medico::~Medico() {

}

void Medico::setAltura(double altura) {
    this->altura = altura;
}

void Medico::setNome(std::string nome) {
    this->nome = nome;
}

void Medico::setPeso(double peso) {
    this->peso = peso;
}

std::string Medico::getNome() {
    return nome;
}

double Medico::getAltura() {
    return altura;
}

double Medico::getPeso() {
    return peso;
}