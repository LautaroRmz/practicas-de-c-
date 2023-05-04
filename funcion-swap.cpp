#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	
	// Ordenar los números en orden ascendente
	(num1 > num2) ? (swap(num1, num2)) : num1;
	(num2 > num3) ? (swap(num2, num3)) : num2;
	(num1 > num2) ? (swap(num1, num2)) : num1;
	
	// Imprimir los números ordenados
	cout << "Los números en orden ascendente son: " << num1 << " " << num2 << " " << num3 << endl;
	
	// Imprimir los números en la secuencia original
	cout << endl;
	cout << "Los números en la secuencia original son: " << num1 << " " << num2 << " " << num3 << endl;
	
	return 0;
}
