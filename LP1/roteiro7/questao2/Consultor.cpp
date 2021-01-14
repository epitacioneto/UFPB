//
// Created by epitacio on 28/09/17.
//

#include "Consultor.h"

Consultor::Consultor() {

}

Consultor::~Consultor() {

}

double Consultor::getSalario() {
    return salario + (salario * (0.1));
}

double Consultor::getSalario(double percentual) {
    return salario + (salario * percentual);
}