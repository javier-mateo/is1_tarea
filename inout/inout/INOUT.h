#pragma once
#include <iostream>
#include <iomanip>
#include <string>

typedef struct tDatos {
    double num1;
    double num2;
    std::string operador;
} tDatos;

tDatos lectura();
void mostrarSolucion(double sol);
void mostrarError(std::string error);
void mensajeInicio();
void help();
double getNum1(tDatos datos);
double getNum2(tDatos datos);
std::string getOperator(tDatos datos);
