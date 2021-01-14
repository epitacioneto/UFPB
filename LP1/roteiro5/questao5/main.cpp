#include "ControleDeGastos.h"

using namespace std;

int main() {

    ControleDeGastos pessoa;
    double despesa1, despesa2;
    std::string tipoDeGasto1, tipoDeGasto2;
    int i;
    bool verifica;
    static double total;

    for(i = 0; i < 2; i++) {
        if(!i) {
            cout << "Digite o valor da primeira despesa: ";
            cin >> despesa1;
            cout << endl << "Digite o tipo de gasto da despesa: ";
            cin >> tipoDeGasto1;

            pessoa.despesas.setValor(despesa1);
            total = pessoa.calculaTotalDeDespesas();
            cout << total;
            pessoa.despesas.setTipoDeGasto(tipoDeGasto1);

        }else {
            cout << "Digite o valor da segunda despesa: ";
            cin >> despesa2;
            cout << endl << "Digite o tipo de gasto da despesa: ";
            cin >> tipoDeGasto2;

            pessoa.despesas.setValor(despesa2);
            total += pessoa.calculaTotalDeDespesas();
            verifica = pessoa.existeDespesaDoTipo(tipoDeGasto1, tipoDeGasto2);
            if(verifica) {
                continue;

            }else {
                pessoa.despesas.setTipoDeGasto(", "); // separador do tipo de gasto
                pessoa.despesas.setTipoDeGasto(tipoDeGasto2);
            }
        }
    }

    cout << "Total das despesas: " << total << endl;
    cout << "Tipos de gastos: " << pessoa.despesas.getTipoDeGasto();

    return 0;
}