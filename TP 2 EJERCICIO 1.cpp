/* Hacer un programa para ingresar por teclado un n�mero y luego emitir por pantalla un cartel aclaratorio
indicando si el mismo es positivo, negativo o cero.
*/




#include<iostream>
using namespace std;

int main () {

int numero;

cout << " Ingresar un numero: ";
cin >> numero;

if ( numero > 0) {
    cout << " Es positivo";
}
 else {
    if ( numero == 0) {
    cout << "Es cero";
}
else {
    cout << "Es negativo";
}
 }




return 0;
}
