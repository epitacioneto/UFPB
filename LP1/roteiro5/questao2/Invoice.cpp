//
// Created by epitacio on 01/09/17.
//

#include "Invoice.h"
#include <iostream>

Invoice::Invoice(int numero, int quantidade, float preco, std::string descricao) {

}

Invoice::~Invoice() {

}

void Invoice::setNumero(int numero) {
    this->numero = numero;

}

void Invoice::setPreco(float preco) {
    this->preco = preco;
}

void Invoice::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

void Invoice::setDescricao(std::string descricao) {
    this->descricao = descricao;
}

int Invoice::getNumero() {
    return this->numero;
}

float Invoice::getPreco() {
    return this->preco;

}

int Invoice::getQuantidade() {
    return this->quantidade;

}

std::string Invoice::getDescricao() {
    return this->descricao;
}

float Invoice::getInvoiceAmount() {

    if(quantidade < 0) {
        quantidade = 0;
    }
    if(preco < 0) {
        preco = 0.0;
    }

    return preco * quantidade;
}