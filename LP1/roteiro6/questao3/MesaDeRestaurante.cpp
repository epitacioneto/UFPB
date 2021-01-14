//
// Created by epitacio on 21/09/17.
//

#include "MesaDeRestaurante.h"

using namespace std;

MesaDeRestaurante::MesaDeRestaurante() {

}

MesaDeRestaurante::~MesaDeRestaurante() {

}

void MesaDeRestaurante::setPedido(Pedido pedidos[], int n) {
    int i, numero, quantidade;
    double preco;
    std::string descricao;

    for(i = 0; i < n; i++) {
        cout << "Pedido " << i+1 << ": " << endl;

        getPedido(n);

        pedidos[i].setNumero(numero);
        pedidos[i].setDescricao(descricao);
        pedidos[i].setQuantidade(quantidade);
        pedidos[i].setPreco(preco);

    }

}

Pedido MesaDeRestaurante::getPedido(int n) {
    Pedido pedido;
    int i;

    for(i = 0; i < n; i++) {
        pedido.getNumero();
        pedido.getQuantidade();
        pedido.getPreco();
        pedido.getDescricao();
    }

    return pedido;
}

void MesaDeRestaurante::adicionaAoPedido() {

}

double MesaDeRestaurante::calculaTotal() {

}

void MesaDeRestaurante::zeraPedidos() {

}