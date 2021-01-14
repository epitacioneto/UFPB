//
// Created by epitacio on 26/09/17.
//

#ifndef QUESTAO1_CIRCULO_H
#define QUESTAO1_CIRCULO_H


#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica {

public:
    Circulo();
    virtual ~Circulo();
    double calcularArea();
    void setRaio(double raio);
    double getRaio();
private:
    double raio;

};


#endif //QUESTAO1_CIRCULO_H
