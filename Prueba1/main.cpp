#include <iostream>
#include "Ventas.h"
#include "Logistica.h"
#include "Personas.h"
#include "Productos.h"
#include "Registros.h"
#include "Tesoreria.h"
using namespace std;


int main() {

    Ventas v;
    v.menuVentas();
    Logistica l;
    l.menuLogistica();
    Personas p;
    p.menuPersonas();
    Productos pr;
    pr.menuProductos();
    Registros r;
    r.menuRegistros();

    return 0;
}
