#include "INOUT.h"

tDatos lectura() {
    tDatos datos;
    std::cout << std::endl << ">> ";
    std::cin >> datos.operador;

    if (datos.operador != "Exit" && datos.operador != "Help") {
        std::cin >> datos.num1 >> datos.num2;
    }
    return datos;
}

void mostrarSolucion(double sol) {
    std::cout << ":" << sol << std::endl;
}

void mostrarError(std::string error) {
    std::cerr << "Error: " << error << std::endl;
}

void mensajeInicio() {
    std::cout << "------Calculadora nivel 2do de carrera------" << std::endl;
    std::cout << "Escribir el comando, el numero 1 y el numero 2" << std::endl;
    std::cout << "[Help] para mostrar comandos" << std::endl;
    std::cout << "[Exit] para apagar calculadora" << std::endl;
}

void help() {
    std::cout << "\nOperaciones disponibles:" << std::endl;
    std::cout << "Help: muestra este mensaje de ayuda" << std::endl;
    std::cout << "Add: suma ambos numeros" << std::endl;
    std::cout << "Sub: resta el primero menos el segundo" << std::endl;
    std::cout << "Mul: multiplica ambos numeros" << std::endl;
    std::cout << "Div: divide el primero por el segundo" << std::endl;
    std::cout << "Exp: eleva el primero al segundo" << std::endl;
}

double getNum1(tDatos datos) { return datos.num1; }
double getNum2(tDatos datos) { return datos.num2; }
std::string getOperator(tDatos datos) { return datos.operador; }
