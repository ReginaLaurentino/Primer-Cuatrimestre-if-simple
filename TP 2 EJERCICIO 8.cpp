/*  Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud
de los tres lados de un tri�ngulo y luego listar que tipo de tri�ngulo es:

- Equil�tero: si los tres lados son iguales
- Is�sceles: si dos de los tres lados son iguales
- Escaleno: si los tres lados son distintos entre s�
*/

#include<iostream>
using namespace std;

int main () {
 int a, b ,c;

cout << " Ingresar un lado del triangulo: ";
cin >> a;
cout << " Ingresar segundo lado del triangulo: ";
cin >> b;
cout << " Ingresar tercer lado del triangulo: ";
cin >> c;

if ( a == b && b == c ){
    cout << "Equilatero";
}
else {
    if ( a != b && b != c && c != a) {
        cout << " Escaleno";
    }
    else {
        cout << "Isosceles";
    }

}





return 0;
}
