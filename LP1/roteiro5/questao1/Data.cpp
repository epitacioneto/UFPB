//
// Created by epitacio on 01/09/17.
//

#include "Data.h"
#include <iostream>

using namespace std;

void Data::setDia(int dia) {
    this->dia = dia;
}

int Data::getDia() {
    return this->dia;
}

void Data::setMes(int mes) {
    this->mes = mes;

}

int Data::getMes() {
    return this->mes;
}

void Data::setAno(int ano) {
    this->ano = ano;

}

int Data::getAno() {
    return this->ano;
}

Data::Data(int dia, int mes, int ano) {
    corrigeData(dia, mes, ano);
}

void Data::corrigeData(int dia, int mes, int ano){
    bool dataCorreta;
    dataCorreta = checaData(dia, mes, ano);

    if(dataCorreta) {
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }else {
        cout << "Data inválida, os valores do dia, mês e ano foram alterados para 1." << endl;
        this->dia = 1;
        this->mes = 1;
        this->ano = 1;
    }
}

bool Data::checaData(int dia, int mes, int ano) {

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (dia > 31) {
            return false;
        }
    }

    if (mes == 2) {
        if (dia > 28) {
            return false;
        }
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            return false;
        }
    }
    return true;
}

Data::~Data() {

}

void Data::avancarDia(int dia, int mes, int ano) {
    bool dataCorreta;

    dia += 1;

    dataCorreta = checaData(dia, mes, ano);

    if(dataCorreta) {
        this->dia = dia;
    }else {
        this->dia = 1;
        this->mes += 1;
    }

}
