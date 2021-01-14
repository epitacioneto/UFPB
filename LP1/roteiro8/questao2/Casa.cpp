//
// Created by epitacio on 31/10/17.
//

#include "Casa.h"

Casa::Casa() {

}

Casa::~Casa() {

}

void Casa::setAreaConstruida(double areaConstruida) {
    this->areaConstruida = areaConstruida;
}

void Casa::setAreaDoTerreno(double areaDoTerreno) {
    this->areaDoTerreno = areaDoTerreno;
}

void Casa::setNumeroDePavimentos(int numeroDePavimentos) {
    this->numeroDePavimentos = numeroDePavimentos;
}

void Casa::setQuantidadeDeQuartos(int quantidadeDeQuartos) {
    this->quantidadeDeQuartos = quantidadeDeQuartos;
}

double Casa::getAreaConstruida() {
    return areaConstruida;
}

double Casa::getAreaDoTerreno() {
    return areaDoTerreno;
}

int Casa::getNumeroDePavimentos() {
    return numeroDePavimentos;
}

int Casa::getQuantidadeDeQuartos() {
    return quantidadeDeQuartos;
}