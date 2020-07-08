/*Hacer un programa para ingresar por teclado dos números y luego informar por pantalla
 la diferencia absoluta entre ambos.
 Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
 Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.
*/

#include<iostream>
using namespace std;

int main () {

int a, b, r;

cout << " Ingresar un numero: ";
cin >> a;
cout << " Ingresar otro numero: ";
cin >> b;

if ( a > b) {
    r = a-b;
}
else {
    r= b-a;
}

cout << "La diefrencia absoluta es " << r;





return 0;}
