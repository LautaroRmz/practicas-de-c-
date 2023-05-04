#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	
	int menor = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
	int mayor = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
	int medio = (num1 != menor && num1 != mayor) ? num1 : ((num2 != menor && num2 != mayor) ? num2 : num3);
	
	cout << menor << endl << medio << endl << mayor << endl << endl;
	cout << num1 << endl << num2 << endl << num3 << endl;
	
	return 0;
}
