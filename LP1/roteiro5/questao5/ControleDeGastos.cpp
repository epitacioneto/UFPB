//
// Created by epitacio on 03/09/17.
//

#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos() {

}

ControleDeGastos::~ControleDeGastos() {

}

double ControleDeGastos::calculaTotalDeDespesas() {
    double total = 0;

    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tipoDeGasto1, std::string tipoDeGasto2) {

    if(tipoDeGasto1.compare(tipoDeGasto2) == 0) {
        return false;
    }
    return true;
}


