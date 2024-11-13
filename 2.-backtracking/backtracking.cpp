#include <iostream>
using namespace std;

void generarCombinaciones(string &clave, int size, int pos, int &intentos, const string &cadena, bool &encontrado) {
    if (pos == size) {
        intentos++;
        cout << "Clave: " << clave << endl;
        if (cadena == clave) {
            encontrado = true;
        }
        return;
    }

    char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
                  'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
                  'u', 'v', 'w', 'x', 'y', 'z'};
    
    for (int i = 0; i < 26 && !encontrado; i++) {
        clave[pos] = abc[i];
        generarCombinaciones(clave, size, pos + 1, intentos, cadena, encontrado);
    }
}

int posicionDe(string cadena, int size) {
    string clave(size, 'a');
    int intentos = 0;
    bool encontrado = false;
    generarCombinaciones(clave, size, 0, intentos, cadena, encontrado);
    return intentos;
}

int main() {
    string cadena;
    cin >> cadena;
    int size = cadena.size();

    cout << posicionDe(cadena, size) << endl;
    return 0;
}