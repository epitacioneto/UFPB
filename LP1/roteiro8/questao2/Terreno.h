//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO2_TERRENO_H
#define QUESTAO2_TERRENO_H
#include "Imovel.h"

class Terreno : public Imovel {
public:
    Terreno();
    virtual ~Terreno();
    void setArea(double area);
    double getArea();
private:
    double area;

};


#endif //QUESTAO2_TERRENO_H
