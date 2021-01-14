//
// Created by epitacio on 01/09/17.
//

#include "DataTest.h"
#include "Data.h"
#include <iostream>

using namespace std;

void DataTest::main() {

    Data pessoa(0, 0, 0);
    int dia, mes, ano;

    cout << "Digite o dia: ";
    cin >> dia;
    cout << endl << "Digite o mes: ";
    cin >> mes;
    cout << endl << "Digite o ano: ";
    cin >> ano;

    pessoa.setDia(dia);
    pessoa.setMes(mes);
    pessoa.setAno(ano);
    pessoa.corrigeData(dia, mes, ano);

    if(!pessoa.checaData(dia, mes, ano)) {
        cout << endl << "Data invalida. Programa encerrado.";

    }else {
        cout << endl << "Data de hoje: " << pessoa.getDia() << "/" << pessoa.getMes() << "/" << pessoa.getAno() << endl;
        pessoa.avancarDia(dia, mes, ano);
        cout << "Próxima data: " << pessoa.getDia() << "/" << pessoa.getMes() << "/" << pessoa.getAno() << endl;

    }
}

DataTest::DataTest() {

}

DataTest::~DataTest() {

}