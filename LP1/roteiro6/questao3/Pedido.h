//
// Created by epitacio on 21/09/17.
//

#ifndef QUESTAO3_PEDIDO_H
#define QUESTAO3_PEDIDO_H

#include <iostream>

class Pedido {
public:
    Pedido();
    virtual ~Pedido();
    void setNumero(int numero);
    void setQuantidade(int quantidade);
    void setDescricao(std::string descricao);
    void setPreco(double preco);
    int getNumero();
    int getQuantidade();
    std::string getDescricao();
    double getPreco();

private:
    int numero, quantidade;
    std::string descricao;
    double preco;
};


#endif //QUESTAO3_PEDIDO_H
