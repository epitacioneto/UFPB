//
// Created by epitacio on 26/09/17.
//

#ifndef QUESTAO1_QUADRADO_H
#define QUESTAO1_QUADRADO_H


#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica {
public:
    Quadrado();
    virtual ~Quadrado();
    double calcularArea();
    void setBase(double base);
    void setAltura(double altura);
    double getBase();
    double getAltura();

private:
    double base, altura;
};


#endif //QUESTAO1_QUADRADO_H
