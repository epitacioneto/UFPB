//
// Created by epitacio on 28/09/17.
//

#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora() {

}

TrabalhadorPorHora::~TrabalhadorPorHora() {

}

void TrabalhadorPorHora::setNome(std::string nome) {
    this->nome = nome;
}

void TrabalhadorPorHora::setSalario(double salario) {
    this->salario = salario;
}

double TrabalhadorPorHora::calcularPagamento(int horas) {
    double horaExtra, salario;

    if(horas > 40) {
       horaExtra = horas;
        horaExtra -= 40;
        horaExtra *= 1.5;

    } else {

    }

}