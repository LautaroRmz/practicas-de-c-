#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia, mes;
	cin >> dia >> mes;
	
	switch (mes){
		case 1:
			if (dia<1 || dia >31 ){
				cout<<"dia es incorrecto";
			} else if (dia<=20){
				cout<<"el signo es capricornio";
			} else cout <<"el signo es acuario";
			break;
	case 2:
		if (dia<1 || dia >28 ){
			cout<<"dia es incorrecto";
		} else if (dia<=20){
			cout<<"el signo es acuario";
		} else cout <<"el signo es piscis";
		break;
	case 3:
		if (dia<1 || dia >31 ){
			cout<<"dia es incorrecto";
		} else if (dia<=20){
			cout<<"el signo es piscis";
		} else cout <<"el signo es aries";
		break;
	case 4:
		if (dia<1 || dia >30 ){
			cout<<"dia es incorrecto";
		} else if (dia<=20){
			cout<<"el signo es aries";
		} else cout <<"el signo es tauro";
		break;
	case 5:
		if (dia<1 || dia >31 ){
			cout<<"dia es incorrecto";
		} else if (dia<=20){
			cout<<"el signo es tauro";
		} else cout <<"el signo es geminis";
		break;
	case 6:
		if (dia<1 || dia >30 ){
			cout<<"dia es incorrecto";
		} else if (dia<=20){
			cout<<"el signo es geminis";
		} else cout <<"el signo es cáncer";
		break;
	case 7:
		if (dia<1 || dia >31 ){
			cout<<"dia es incorrecto";
		} else if (dia<=20){
			cout<<"el signo es cáncer";
		} else cout <<"el signo es leo";
		break;
	
	case 8:
		if (dia<1 || dia >31 ){
			cout<<"dia es incorrecto";
		} else if (dia<=20){
			cout<<"el signo es leo";
		} else cout <<"el signo es virgo";
		break;
	case 9:
		if (dia<1 || dia >30 ){
			cout<<"dia es incorrecto";
		} else if (dia<=20){
			cout<<"el signo es virgo";
		} else cout <<"el signo es libra";
		break;
	case 10:
		if (dia>= 1 and dia <=20){
			cout<<"el signo es libra";
		}
		else cout<<"el signo es escorpio";	
		break;
	case 11:
		if (dia>= 1 and dia <=20){
			cout<<"el signo es escorpio";
		}
		else cout<<"el signo es sagitario";
		break;
	case 12:
		if (dia>= 1 and dia <=20){
			cout<<"el signo es sagitario";
		}
		else cout<<"el signo es capricornio";
		break;
	}
	return 0;
}

