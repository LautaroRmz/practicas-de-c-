#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	cin >> a >> b >> c;
	
	a <= -100 and a <=100;
	b <= -100 and b <=100;
	c <= -100 and c <=100;

	if(a<b and b<c){
	cout << "C" << endl; //creciente debil
	}
	else if(a>b and b>c){
	cout << "D" << endl; //decreciente debil
	}
	else if(a==b and a==c and b==c){
	cout << "I" << endl; //iguales
	}
	else {
	cout << "X" << endl; //no existe orden aparente
	}

	return 0;
}

