/* AED-TP2-PAR
* Gustavo Gaston Idoyaga
* 20150422
*/

#include <iostream>

int a, b, c;

int main () {
	std :: cout << "Ingrese un numero.\n" ;
	std :: cin >> a;
	b = a % 2;
	if (b == 0) {
		std :: cout << "El numero ingresado es par.\n";
	}
	else {
		std :: cout << "El numero ingresado es impar.\n";
	}
}
