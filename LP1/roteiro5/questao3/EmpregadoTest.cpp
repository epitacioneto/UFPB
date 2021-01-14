//
// Created by epitacio on 03/09/17.
//

#include "EmpregadoTest.h"
#include "Empregado.h"

using namespace std;

EmpregadoTest::EmpregadoTest() {

}

EmpregadoTest::~EmpregadoTest() {

}

void EmpregadoTest::main() {
    Empregado pessoa1("", "", 0.0), pessoa2("","", 0.0);

    string nome, sobrenome;
    double salario;
    int i;

    for(i = 0; i <= 1; i++) {
        if(!i) {
            cout << "Digite seu nome: ";
            cin >> nome;
            pessoa1.setNome(nome);
            cout << endl << "Digite o sobrenome: ";
            cin >> sobrenome;
            pessoa1.setSobrenome(sobrenome);
            cout << endl << "Digite o salário mensal: ";
            cin >> salario;
            pessoa1.setSalario(salario);
            cout << "Nome: " << pessoa1.getNome() << endl << "Sobrenome: " << pessoa1.getSobrenome();
            cout << endl << "Salário: " << pessoa1.getSalario();
            cout << endl << "Salário anual: " << pessoa1.salarioAnual(salario);
            cout << endl << "Salário anual pós aumento: " << pessoa1.aumento(salario);
        }else {
            cout << "Digite seu nome: ";
            cin >> nome;
            pessoa2.setNome(nome);
            cout << endl << "Digite o sobrenome: ";
            cin >> sobrenome;
            pessoa2.setSobrenome(sobrenome);
            cout << endl << "Digite o salário mensal: ";
            cin >> salario;
            pessoa2.setSalario(salario);
            cout << "Nome: " << pessoa2.getNome() << endl << "Sobrenome: " << pessoa2.getSobrenome();
            cout << endl << "Salário: " << pessoa2.getSalario();
            cout << endl << "Salário anual: " << pessoa2.salarioAnual(salario);
            cout << endl << "Salário anual pós aumento: " << pessoa2.aumento(salario);
        }
    }
}