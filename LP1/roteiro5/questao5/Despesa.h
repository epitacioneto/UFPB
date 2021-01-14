//
// Created by epitacio on 03/09/17.
//

#ifndef QUESTAO5_DESPESA_H
#define QUESTAO5_DESPESA_H
#include <iostream>

class Despesa {

public:
    Despesa();
    ~Despesa();
    void setValor(double valor);
    void setTipoDeGasto(std::string tipoDeGasto);
    double getValor();
    std::string getTipoDeGasto();

private:
    double valor = 0;
    std::string tipoDeGasto;

};


#endif //QUESTAO5_DESPESA_H
