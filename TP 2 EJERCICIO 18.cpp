/*
 Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:

$ 10 por kilovatio por el consumo hasta los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo excedente de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo excedente de 201 kilovatios en adelante.

Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente,
 el programa calcule e informe el total a pagar por el mismo.
 Ejemplo 1: Un consumo de 55 kilovatios, se calculará: $ 10 x 55= $ 550
 Ejemplo 2: Un consumo de 125 kilovatios, se calculará: $ 10 x 100 + $ 12 x 25=$ 1300
 Ejemplo 3: Un consumo de 250 kilovatios, se calculará: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950
 */

#include<iostream>
using namespace std;
int main () {

int kv , p, t, r, s;

cout << "Ingrese el consumo ";
cin >> kv;

if ( kv <= 100) {
    t = kv *10;
}
else {
    if ( kv > 100 && kv <=200){
        p = kv -100;
        p = p *12 ;
        r = 100*10;
        t = p + r;
            }
            else {
                p = kv -200;
                p =  p*15;
                r = 100*10;
                s = 100*12;
                t = p + r + s;
            }
}

cout << "El total a abonar es $" << t;






return 0;
}
