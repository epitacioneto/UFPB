#include <iostream>
#include "Consultor.h"

using namespace std;

int main() {
    Funcionario funcionario;
    Consultor consultor;
    std::string nome;
    double salario, percentual;
    int matricula;

    cout << "Digite o nome: ";
    cin >> nome;
    cout << endl << "Digite a matricula: ";
    cin >> matricula;
    cout << endl << "Digite o salario: ";
    cin >> salario;

    funcionario.setNome(nome);
    consultor.setSalario(salario);
    funcionario.setMatricula(matricula);

    cout << "Nome: " << funcionario.getNome() << endl;
    cout << "Matricula: " << funcionario.getMatricula() << endl;
    cout << "Salario sem acréscimos: " << consultor.getSalario();

    cout << endl << "Digite o percentual de acréscimo para o consultor";
    cin >> percentual;

    salario = consultor.getSalario(percentual);
    consultor.setSalario(salario);

    cout << endl << "Nome: " << funcionario.getNome() << endl;
    cout << "Matricula: " << funcionario.getMatricula() << endl;
    cout << "Salario com acréscimo: " << consultor.getSalario();

    return 0;
}