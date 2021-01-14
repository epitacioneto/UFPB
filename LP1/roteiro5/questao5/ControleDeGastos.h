//
// Created by epitacio on 03/09/17.
//

#ifndef QUESTAO5_CONTROLEDEGASTOS_H
#define QUESTAO5_CONTROLEDEGASTOS_H
#include "Despesa.h"


class ControleDeGastos {

public:
    Despesa despesas;
    double calculaTotalDeDespesas();
    ControleDeGastos();
    ~ControleDeGastos();
    bool existeDespesaDoTipo(std::string tipoDeGasto1, std::string tipoDeGasto2);

};


#endif //QUESTAO5_CONTROLEDEGASTOS_H
