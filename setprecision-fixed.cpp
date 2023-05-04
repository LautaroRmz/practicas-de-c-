#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float a, b, media;
	
	cin>>fixed>>setprecision(1)>> a >> b;
	media = (a*3.5 + b*7.5) /11;
	
	cout<<"MEDIA = " <<fixed<<setprecision(5)<<media<<endl;
	return 0;
}
