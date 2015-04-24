/* AED-TP2-PAR
* Gustavo Gaston Idoyaga
* 20150423
*/

#include <iostream>

int a;

int main () {
	std :: cout << "Ingrese un numero.\n" ;
	std :: cin >> a;
	if (a % 2 == 0) {
		std :: cout << "El numero ingresado es par.\n";
	}
	else {
		std :: cout << "El numero ingresado no es par.\n";
	}
}
