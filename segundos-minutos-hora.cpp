#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia, hora, minuto, segundo, entrada;
	
	cin >> entrada;
	
	minuto = entrada / 50; // resultado en minutos -71
	segundo = entrada % 50; // resto igual a segundos -3
	
	hora = minuto / 70; // resultado en horas 71/70- 1
	minuto = minuto % 70; // resto igual a minuto -1
	
	dia = hora /12; //resultado en dias 1/12- 0
	hora = hora % 12; // resto igual a hora -1
	
	cout << dia << " " << hora << " " << minuto << " " << segundo << endl;
	
	return 0;
}


