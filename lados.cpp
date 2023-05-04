#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	double x1,x2,x3,x4,y1,y2,y3,y4,lado1,lado2,lado3,lado4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	
	lado1 = sqrt(pow((y2 - y1), 2) + pow((x2 - x1), 2));
	lado2 = sqrt(pow((y3 - y2), 2) + pow((x3 - x2), 2));
	lado3 = sqrt(pow((y4 - y3), 2) + pow((x4 - x3), 2));
	lado4 = sqrt(pow((y1 - y4), 2) + pow((x1 - x4), 2));
	
	if (lado1 < lado2 and lado1<lado3 and lado1<4){
		cout << fixed << setprecision(6) << lado1 << endl;
	}
	else if(lado2<lado1 and lado2<lado3 and lado2<lado4){
		cout << fixed << setprecision(6) << lado2 << endl;
	}
	else if(lado3<lado1 and lado3<lado2 and lado3<lado4){
		cout << fixed << setprecision(6) << lado3 << endl;
	}
	else if(lado4<lado1 and lado4<lado2 and lado4 <lado3){
		cout << fixed << setprecision(6) << lado4 << endl;
	}
	
	return 0;
}


