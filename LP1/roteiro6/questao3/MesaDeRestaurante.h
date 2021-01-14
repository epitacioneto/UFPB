//
// Created by epitacio on 21/09/17.
//

#ifndef QUESTAO3_MESADERESTAURANTE_H
#define QUESTAO3_MESADERESTAURANTE_H

#include "Pedido.h"

class MesaDeRestaurante : public Pedido {
public:
    int n = 5;
    MesaDeRestaurante();
    virtual ~MesaDeRestaurante();
    void adicionaAoPedido();
    void zeraPedidos();
    double calculaTotal();
    void setPedido(Pedido pedidos[], int n);
    Pedido getPedido(int n);

private:
    Pedido pedidos[5];

};


#endif //QUESTAO3_MESADERESTAURANTE_H
