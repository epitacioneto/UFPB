//
// Created by epitacio on 21/09/17.
//

#ifndef QUESTAO3_RESTAURANTECASEIRO_H
#define QUESTAO3_RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"

class RestauranteCaseiro : public MesaDeRestaurante {
public:
    RestauranteCaseiro();
    ~RestauranteCaseiro();
    void adicionaAoPedido();
    double calculaTotalRestaurante();


private:
    MesaDeRestaurante mesas[5];

};


#endif //QUESTAO3_RESTAURANTECASEIRO_H
