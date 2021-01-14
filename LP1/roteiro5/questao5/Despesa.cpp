//
// Created by epitacio on 03/09/17.
//

#include "Despesa.h"

Despesa::Despesa() {

}

Despesa::~Despesa() {

}

void Despesa::setValor(double valor) {
    this->valor = valor;
}

void Despesa::setTipoDeGasto(std::string tipoDeGasto) {
    this->tipoDeGasto = tipoDeGasto;
}

double Despesa::getValor() {
    return this->valor;
}

std::string Despesa::getTipoDeGasto() {
    return this->tipoDeGasto;
}
