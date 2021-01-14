//
// Created by epitacio on 21/09/17.
//

#include "Pedido.h"

using namespace std;

Pedido::Pedido() {

}

Pedido::~Pedido() {

}

void Pedido::setNumero(int numero) {
    cout << "Numero do pedido: ";
    cin >> numero;

    this->numero = numero;
}

void Pedido::setPreco(double preco) {
    cout << "Preço do pedido: ";
    cin >> preco;

    this->preco = preco;
}

void Pedido::setQuantidade(int quantidade) {
    cout << "Quantidade: ";
    cin >> quantidade;

    this->quantidade = quantidade;
}

void Pedido::setDescricao(std::string descricao) {
    cout << "Descrição do pedido: ";
    cin >> descricao;

    this->descricao = descricao;
}

int Pedido::getNumero() {
    return numero;
}

double Pedido::getPreco() {
    return preco;
}

int Pedido::getQuantidade() {
    return quantidade;
}

std::string Pedido::getDescricao() {
    return descricao;
}