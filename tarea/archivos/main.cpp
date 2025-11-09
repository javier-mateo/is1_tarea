#include <iostream>
#include "INOUT.h"
#include "OPERATIONS.h"

int main() {
    mensajeInicio();
    tDatos datos;

    while (true) {
        datos = lectura();
        std::string op = getOperator(datos);

        if (op == "Exit") {
            std::cout << "Apagando calculadora..." << std::endl;
            break;
        }
        else if (op == "Help") {
            help();
        }
        else {
            double resultado = execute(datos);
            if (op == "Add" || op == "Sub" || op == "Mul" || op == "Div" || op == "Exp") {
                mostrarSolucion(resultado);
            }
        }
    }

    return 0;
}
