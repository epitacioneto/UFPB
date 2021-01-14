//
// Created by epitacio on 21/09/17.
//

#include <iostream>
#include "Televisao.h"
using namespace std;

Televisao::Televisao() {

}

Televisao::~Televisao() {

}

void Televisao::setCanal(int canal) {
    this->canal = canal;
}

void Televisao::setVolume(int volume) {
    this->volume = volume;
}

void Televisao::ajustaVolume(int volume) {
    int i;

    cout << "(1) Aumentar volume" << endl;
    cout << "(2) Diminuir volume" << endl;
    cin >> i;



    switch(i) {
        case 1:
            volume += volume;
            this->volume = volume;
            break;
        case 2:
            if(volume - 1 < 0) {
                volume = 0;
                this->volume = volume;
            }else {
                volume -= 1;
                this->volume = volume;
            }
            break;
        default:
            cout << "Opção inválida.";

    }

}

void Televisao::ajustaCanal(int canal) {
    int i, num;

    cout << "(1) Aumentar o canal em 1" << endl;
    cout << "(2) Diminuir o canal em 1" << endl;
    cout << "(3) Entre com um número para canal" << endl;
    cin >> i;

    switch(i) {
        case 1:
            canal += canal;
            this->canal = canal;
            break;
        case 2:
            if(canal - 1 < 0) {
                cout << endl << "Canal inválido.";
            }else {
                canal -= 1;
                this->canal = canal;
            }
            break;
        case 3:
            cout << "Digite o número do canal: ";
            cin >> num;

            if(num <= 0) {
                num = 1;
                this->canal = num;
                cout << endl << "Número inválido, canal foi alterado para 1.";
            }else {
                this->canal = num;
            }
            break;
        default:
            cout << "Opção inválida.";
    }

}

void Televisao::exibeTeve() {
    cout << "Canal: " << canal << endl;
    cout << "Volume: " << volume;
}