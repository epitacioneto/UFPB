//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO3_COMISSIONADO_H
#define QUESTAO3_COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario {
public:
    Comissionado();
    virtual ~Comissionado();
    double calcularSalario();
    void setVendasSemanais(double vendasSemanais);
    void setPercentualComissao(double percentualComissao);
    double getVendasSemanais();
    double getPercentualComissao();

private:
    double vendasSemanais, percentualComissao;

};


#endif //QUESTAO3_COMISSIONADO_H
