#include <iostream>
#include "Televisao.h"

using namespace std;

int main() {
    Televisao tv;
    int volume = 1, canal = 1, n = 0;

    tv.setVolume(volume);
    tv.setCanal(canal);

    while(1) {
        cout << "Controle de televisao" << endl;
        cout << "(1) Aumentar/diminuir volume" << endl;
        cout << "(2) Aumentar/diminuir canal" << endl;
        cout << "(0) Sair" << endl;
        cin >> n;

        switch(n) {
            case 0:
                cout << "Saindo";
                break;

            case 1:
                tv.ajustaVolume(volume);
                tv.exibeTeve();
                break;

            case 2:
                tv.ajustaCanal(canal);
                tv.exibeTeve();
                break;

            default:
                cout << "Opção inválida.";

        }

        if(!n) {
            break;
        }
    }

    return 0;
}