//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO2_CASA_H
#define QUESTAO2_CASA_H
#include "Imovel.h"

class Casa : public Imovel {
public:
    Casa();
    virtual ~Casa();
    void setNumeroDePavimentos(int numeroDePavimentos);
    void setQuantidadeDeQuartos(int quantidadeDeQuartos);
    void setAreaDoTerreno(double areaDoTerreno);
    void setAreaConstruida(double areaConstruida);
    int getNumeroDePavimentos();
    int getQuantidadeDeQuartos();
    double getAreaDoTerreno();
    double getAreaConstruida();
private:
    int numeroDePavimentos, quantidadeDeQuartos;
    double areaDoTerreno, areaConstruida;

};


#endif //QUESTAO2_CASA_H
