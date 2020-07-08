/* Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos
*/

#include<iostream>
using namespace std;

int main () {

int a, b, c, d, e, p;

p = 0;

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

if ( a > 0) {
    p++;
}
if ( b > 0) {
    p++;
}
if ( c > 0) {
    p++;
}
if ( d > 0) {
    p++;
}
if ( e > 0) {
    p++;
}

cout <<"La cantidad de numeros positivos es " << p;






return 0;
}
