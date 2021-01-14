//
// Created by epitacio on 24/10/17.
//

#ifndef QUESTAO1_ICONTA_H
#define QUESTAO1_ICONTA_H


class IConta {
public:
    virtual void sacar(double valor) = 0;
    virtual void depositar(double valor) = 0;
    IConta();
    virtual ~IConta();

};


#endif //QUESTAO1_ICONTA_H
