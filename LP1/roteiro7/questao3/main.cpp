#include <iostream>

#include "Ginecologista.h"
#include "Oftamologista.h"
#include "Otorrino.h"

using namespace std;

int main() {
    Medico *medicos;
    int i;
    bool assistente = true;

    while(assistente) {

        cout << "(1) Ginecologista" << endl;
        cout << "(2) Oftamologista" << endl;
        cout << "(3) Otorrino" << endl;
        cout << "(0) Sair" << endl;

        cin >> i;

        switch (i) {
            case 0:
                cout << "Até logo.";
                assistente = false;
                break;
            case 1:
                medicos = new Ginecologista();
                break;
            case 2:
                medicos = new Oftamologista();
                break;
            case 3:
                medicos = new Otorrino();
                break;
            default:
                cout << "Número inválido.";
                assistente = false;
        }

    }


    return 0;
}