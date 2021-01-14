#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
	int n;
	float num;

	while(1) {
		cin >> n;
		if(n == 0) {
			break;
		}else {
				num = pow((1/6.0), n); //onde 1/6 é a probabilidade de cair qualquer lado de um dado com seis lados.
				num *= 100;
		}
		cout << "Cada face tem " << num << "% de chances de aparecer." << endl;

	}

return 0;
}