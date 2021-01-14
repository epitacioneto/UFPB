//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO3_SISTEMAGERENCIAFOLHA_H
#define QUESTAO3_SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"

class SistemaGerenciaFolha : public Funcionario {
public:
    SistemaGerenciaFolha();
    virtual ~SistemaGerenciaFolha();
    void setFuncionario();
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario();
private:
    Funcionario funcionarios;


};


#endif //QUESTAO3_SISTEMAGERENCIAFOLHA_H
