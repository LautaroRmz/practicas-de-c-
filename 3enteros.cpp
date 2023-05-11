#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int A,B,C;
	float D;
	
	do{
	cin >> A >> B >> C;
	} while (A < 100 || A > 999 || B < 100 || B > 999 || C < 100 || C > 999);
	
	//ult digito de a 
	A = A%10;
	// digito medio de b
	B = (B%100)/10;
	// primer digito de c 
	C = C/100;
	
	D = (A + B + C) / 27.0;
	
	if(D < 0.038){
		cout << "Dos dígitos son 0" << endl;
	}else if (D < 0.074  and D > 0.076){
		cout << "Suma de dígitos es 2" << endl;
	}else if (D > 0.999){
		cout << "Tres dígitos son 9" << endl;
	}else{
		cout << "Otro caso!" << endl;
	}
	
	return 0;
}


