//
// Created by epitacio on 26/09/17.
//

#ifndef QUESTAO1_FIGURAGEOMETRICA_H
#define QUESTAO1_FIGURAGEOMETRICA_H

#include <iostream>

class FiguraGeometrica {

public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica();
    void setNome(std::string nome);
    std::string getNome();
    virtual double calcularArea() = 0;
    double calcularArea(std::string nome);
private:
    std::string nome;

};


#endif //QUESTAO1_FIGURAGEOMETRICA_H
