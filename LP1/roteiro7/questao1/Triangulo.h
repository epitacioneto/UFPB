//
// Created by epitacio on 26/09/17.
//

#ifndef QUESTAO1_TRIANGULO_H
#define QUESTAO1_TRIANGULO_H


#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica {
public:
    Triangulo();
    virtual ~Triangulo();
    double calcularArea();
    void setBase(double base);
    void setAltura(double altura);
    double getBase();
    double getAltura();

private:
    double base, altura;

};


#endif //QUESTAO1_TRIANGULO_H
