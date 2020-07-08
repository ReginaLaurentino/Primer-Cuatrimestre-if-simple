/* Hacer un programa para ingresar cinco números y listar el máximo de ellos
*/

#include<iostream>
using namespace std;

int main () {

int a, b, c, d, e, mayor;

cout << " Ingresar primer numero: ";
cin >> a;
cout << " Ingresar segundo numero: ";
cin >> b;
cout << " Ingresar tercer numero: ";
cin >> c;
cout << " Ingresar cuarto numero: ";
cin >> d;
cout << " Ingresar quinto numero: ";
cin >> e;

if ( a > b) {
    mayor = a;
}
else {
    mayor = b;
}

if ( c > mayor) {
    mayor =c;
}
 if ( d> mayor) {
    mayor = d;
 }
if ( e > mayor) {
    mayor = e;
}

cout << "El importe mayor es " << mayor;





return 0;
}
