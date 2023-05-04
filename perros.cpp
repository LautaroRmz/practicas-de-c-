#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c,p,h;
	cin >> c >> p >> h ;
	
	h=h+1;
	p= c-p;
	p/h;
	
	cout<< p <<endl;
	return 0;
}


//	C = total de cachorros
//	P = los que se quedara porque quiere más los que sobren P= (C-P) + (C%H)
//	H = cantidad de hijos entre los que se repartiran los cachorros mas la esposa (C/H)
	
//pancho se quedara con P cachorros de C, porque le gustan
//los demas se repartiran entre los H hijos de manera equitativa,
//	si sobra algun cachorro/s, tambien se lo quedará
