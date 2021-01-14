//
// Created by epitacio on 28/09/17.
//

#ifndef QUESTAO3_MEDICO_H
#define QUESTAO3_MEDICO_H

#include <iostream>

class Medico {
public:
    Medico();
    virtual ~Medico();
    void setNome(std::string nome);
    void setAltura(double altura);
    void setPeso(double peso);
    std::string getNome();
    double getAltura();
    double getPeso();

private:
    std::string nome;
    double altura, peso;
};


#endif //QUESTAO3_MEDICO_H
