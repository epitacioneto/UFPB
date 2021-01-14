#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void) {
	int num, secreto;
	
	secreto = rand() % 100 + 1;

	do {

		cout << "Adivinhe o numero! Entre 1 e 100." << endl;
		cin >> num;

		if(num > secreto) {
			cout << "Muito alto. Tente novamente." << endl;
		}
		if(num < secreto) {
			cout << "Muito baixo. Tente novamente." << endl;
		}

	}while(num != secreto);

	cout << "Parabens! Voce acertou." << endl;

return 0;
}