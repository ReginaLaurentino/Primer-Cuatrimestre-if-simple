/* Hacer un programa para ingresar tres números y listar el máximo de ellos
*/

#include<iostream>
using namespace std;

int main () {

int a, b, c, mayor;

cout << " Ingresar primer numero: ";
cin >> a;
cout << " Ingresar segundo numero: ";
cin >> b;
cout << " Ingresar tercer numero: ";
cin >> c;

if (a> b) {
    mayor = a;
}
else {
    mayor = b;
}

if ( c > mayor) {
    mayor = c;
}

cout << "El numero mayor es: " << mayor;






return 0;
}
