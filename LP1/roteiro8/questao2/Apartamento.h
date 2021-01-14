//
// Created by epitacio on 31/10/17.
//

#ifndef QUESTAO2_APARTAMENTO_H
#define QUESTAO2_APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel {
public:
    Apartamento();
    virtual ~Apartamento();
    void setPosicao(std::string posicao);
    void setValorDoCondominio(double valorDoCondominio);
    void setNumeroDeVagasNaGaragem(int numeroDeVagasNaGaragem);
    std::string getPosicao();
    double getValorDoCondominio();
    int getNumeroDeVagasNaGaragem();
private:
    std::string posicao;
    double valorDoCondominio;
    int numeroDeVagasNaGaragem;

};


#endif //QUESTAO2_APARTAMENTO_H
