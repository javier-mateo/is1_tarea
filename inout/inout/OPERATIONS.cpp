#include "OPERATIONS.h"

double add(double num1, double num2) {
    return num1 + num2;
}

double sub(double num1, double num2) {
    return num1 - num2;
}

double mul(double num1, double num2) {
    return num1 * num2;
}

double div(double num1, double num2) {
    if (num2 == 0) {
        mostrarError("No se puede dividir entre cero.");
        return 0;
    }
    return num1 / num2;
}

double exp(double num1, double num2) {
    return std::pow(num1, num2);
}

double execute(tDatos datos) {
    std::string op = getOperator(datos);
    double a = getNum1(datos);
    double b = getNum2(datos);

    if (op == "Add") return add(a, b);
    else if (op == "Sub") return sub(a, b);
    else if (op == "Mul") return mul(a, b);
    else if (op == "Div") {
        if (b == 0) {
            mostrarError("No se puede dividir entre cero.");
            return 0;
        }
        return div(a, b);
    }
    else if (op == "Exp") return exp(a, b);
    else {
        mostrarError("Comando no reconocido.");
        return 0;
    }
}
