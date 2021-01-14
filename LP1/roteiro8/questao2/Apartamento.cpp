//
// Created by epitacio on 31/10/17.
//

#include "Apartamento.h"

Apartamento::Apartamento() {

}

Apartamento::~Apartamento() {

}

void Apartamento::setValorDoCondominio(double valorDoCondominio) {
    this->valorDoCondominio = valorDoCondominio;
}

void Apartamento::setNumeroDeVagasNaGaragem(int numeroDeVagasNaGaragem) {
    this->numeroDeVagasNaGaragem = numeroDeVagasNaGaragem;
}

void Apartamento::setPosicao(std::string posicao) {
    this->posicao = posicao;
}

std::string Apartamento::getPosicao() {
    return posicao;
}

double Apartamento::getValorDoCondominio() {
    return valorDoCondominio;
}

int Apartamento::getNumeroDeVagasNaGaragem() {
    return numeroDeVagasNaGaragem;
}