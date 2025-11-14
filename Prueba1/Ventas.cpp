#include "Ventas.h"
using namespace std;
#include <iostream>


Ventas::Ventas(string n){
    nombre = n;

}


void Ventas::menuVentas() {

        cout << "=== VENTAS ===\n";
        cout << "1. Nueva venta\n";
        cout << "2. Modificar venta\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
}
