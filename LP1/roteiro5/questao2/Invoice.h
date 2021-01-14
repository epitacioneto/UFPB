//
// Created by epitacio on 01/09/17.
//

#ifndef QUESTAO2_INVOICE_H
#define QUESTAO2_INVOICE_H

#include <iostream>

class Invoice {

public:
    Invoice(int numero, int quantidade, float preco, std::string descricao);
    ~Invoice();
    void setNumero(int numero);
    void setQuantidade(int quantidade);
    void setPreco(float preco);
    void setDescricao(std::string descricao);
    int getNumero();
    int getQuantidade();
    float getPreco();
    std::string getDescricao();
    float getInvoiceAmount();

private:
    int numero, quantidade;
    float preco;
    std::string descricao;


};


#endif //QUESTAO2_INVOICE_H
