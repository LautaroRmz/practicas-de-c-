#include <iostream>
using namespace std;

int main() {
	int codigo_area;
	cin >> codigo_area;
	
	if (codigo_area == 61) {
		cout << "Brasilia\n";
	} else if (codigo_area == 71) {
		cout << "Salvador\n";
	} else if (codigo_area == 11) {
		cout << "Sao Paulo\n";
	} else if (codigo_area == 21) {
		cout << "Rio de Janeiro\n";
	} else if (codigo_area == 32) {
		cout << "Juiz de Fora\n";
	} else if (codigo_area == 19) {
		cout << "Campinas\n";
	} else if (codigo_area == 27) {
		cout << "Vitoria\n";
	} else if (codigo_area == 31) {
		cout << "Belo Horizonte\n";
	} else {
		cout << "DDD nao cadastrado\n";
	}
	
	return 0;
}
