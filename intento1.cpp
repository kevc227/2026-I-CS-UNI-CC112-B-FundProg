#include <iostream>
using namespace std;
double suma(int a, int b) {
    return a + b;
}
double resta(int a, int b) {
    return a - b;
}
double producto(int a, int b) {
    return a * b;
}
double division(int a, int b) {
    if (b == 0) {
        std::cout << "Error: Division por cero" << std::endl;
        return 0;
    }
    return (double)a / b;
}
double (*apf[4])(int, int) = {suma, resta, producto, division};
int main() {
    int a, b;
    std::cout << "Ingrese dos numeros: ";
    std::cin >> a >> b;
    int ope;
    std::cout << "Ingrese el operador (0: suma, 1: resta, 2: producto, 3: division): ";
    std::cin >> ope;
    if (ope < 0 || ope > 3) {
        std::cout << "Error: Operador invalido" << std::endl;
        return 1;
    }
    double r = apf[ope](a, b);
    std::cout << "Resultado: " << r << std::endl;
    return 0;
}