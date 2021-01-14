#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"
#include "IConta.h"

using namespace std;

int main() {
    Conta conta;
    ContaEspecial contaEspecial;

    std::string nomeCliente, numeroConta;
    double salarioMensal, saldo, limite;

    cout << "Digite o nome do cliente: ";
    cin >> nomeCliente;
    cout << endl << "Digite o numero da conta: ";
    cin >> numeroConta;
    cout << endl << "Digite o salário mensal: ";
    cin >> salarioMensal;

    conta.setNomeCliente(nomeCliente);
    conta.setNumeroConta(numeroConta);
    conta.setSalarioMensal(salarioMensal);

    conta.definirLimite();

    return 0;
}