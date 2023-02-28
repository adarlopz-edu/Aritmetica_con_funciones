#include <iostream>
#include <conio.h>

using namespace std;

int suma(int num1, int num2) {
	float s = num1 + num2;
	return s;
}
int resta(int num1, int num2) {
	float r = num1 - num2;
	return r;
}
int multiplicacion(int num1, int num2) {
	float m = num1 * num2;
	return m;
}
int division(int num1, int num2) {
	float d = num1 / num2;
	return d;
}

int main() {

	int num1, num2;

	cout << "OPERACIONES BASICAS CON FUNCIONES" << endl	<< endl;
	cout << "Introduce un numero:";
	cin >> num1;
	cout << "Introduce un segundo numero:";
	cin >> num2;
	cout << "Elige una operacion:" << endl;
	cout << "1. Suma" << endl << "2. Resta" << endl << "3. Multiplicacion" << endl << "4. Division" << endl;
	char o = _getch();
	if (o == '1') {
		cout << endl;
		int ro = suma(num1, num2);
		cout <<	"El resultado es: " << ro;
		cout << endl;
	}
	if (o == '2') {
		cout << endl;
		int ro = resta(num1, num2);
		cout << "El resultado es: " << ro;
		cout << endl;
	}
	if (o == '3') {
		cout << endl;
		int ro = multiplicacion(num1, num2);
		cout << "El resultado es: " << ro;
		cout << endl;
	}
	if (o == '4') {
		cout << endl;
		if (num2 == 0) {
			cout << "El resultado es: infinito";
		}else{
			int ro = division(num1, num2);
			cout << "El resultado es: " << ro;
		}
		cout << endl;
	}
	if (isalpha(o)) {
		cout << o << " No es una opcion";
	}
}