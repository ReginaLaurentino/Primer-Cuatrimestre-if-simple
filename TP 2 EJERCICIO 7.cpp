/* Hacer un programa para ingresar por teclado tres n�meros e informar
 con una leyenda aclaratoria si los tres son todos distintos entre s�,
  caso contrario no emitir nada. Ayuda: Si A es distinto de B y B es distinto de C,
   es no s�gnica que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
*/

#include<iostream>
using namespace std;

int main () {

int a, b ,c;

cout << " Ingresar primer numero: ";
cin >> a;
cout << " Ingresar segundo numero: ";
cin >> b;
cout << " Ingresar tercer numero: ";
cin >> c;

if ( a!= b && b != c && c !=a) {
    cout<< "Son distintos";
}






return 0;
}
