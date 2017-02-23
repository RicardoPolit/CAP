#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> personas;

    personas["Adriana"]   = 1234;
    personas["Manuel"]    = 946;
    personas["Alain"]     = 231;
    personas["John"]      = 1;
    personas["Alejandra"] = 5431;

    // El tipo de dato de un mapa es un pair
    // el primer elemento es la llave
    // y el segundo es el valor
    for (auto p : personas)
        cout << "Nombre: " << p.first << " Matricula: " << p.second << '\n';

    return 0;
}
