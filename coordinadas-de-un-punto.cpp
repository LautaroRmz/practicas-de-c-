#include <iostream>
using namespace std;

int main() {
	float x, y;
	cin >> x >> y;
	if (x == 0 && y == 0) cout << "Origem" << endl;
	else if (x == 0) cout << "Eixo Y" << endl;
	else if (y == 0) cout << "Eixo X" << endl;
	else cout << "Q" << (y > 0 ? (x > 0 ? 1 : 2) : (x > 0 ? 4 : 3)) << endl;
	return 0;
}

