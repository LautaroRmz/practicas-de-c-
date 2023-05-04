#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

	int main(int argc, char *argv[]) {
		float x, y, z, pi, resultado;
		
		cin >> x >> y >> z;
		
		pi= 3.14159;

		resultado= (x+x * (y + z*z)) / ((x+pi) * (y+pi));
		
		cout<<resultado << endl;
		
		
		return 0;
	}
	
