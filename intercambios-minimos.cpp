#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	cin >> a >> b >> c;
	
	if(a < b and b < c){
		cout<< 0 << endl; //intercambios
	} else cout << 1 << endl;
	
	
	
	return 0;
}

