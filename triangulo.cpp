#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	double A, B, C;
	
	// Leemos los lados del triángulo
	cout << "Ingrese los tres lados del triangulo: ";
	cin >> A >> B >> C;
	
	// Ordenamos los lados en orden decreciente
	double lados[] = {A, B, C};
	sort(lados, lados + 3, greater<double>());
	
	A = lados[0];
	B = lados[1];
	C = lados[2];
	
	// Determinamos el tipo de triángulo que se forma
	if (A >= B + C) {
		cout << "NAO FORMA TRIANGULO\n";
	} else {
		if (pow(A, 2) == pow(B, 2) + pow(C, 2)) {
			cout << "TRIANGULO RETANGULO\n";
		} else if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
			cout << "TRIANGULO OBTUSANGULO\n";
		} else {
			cout << "TRIANGULO ACUTANGULO\n";
		}
		
		if (A == B && B == C) {
			cout << "TRIANGULO EQUILATERO\n";
		} else if (A == B || B == C) {
			cout << "TRIANGULO ISOSCELES\n";
		}
	}
	
	return 0;
}
