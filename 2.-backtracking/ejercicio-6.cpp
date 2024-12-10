#include <iostream>
#include <math.h>
using namespace std;

void generarCombinaciones(string &clave, int size, int pos, int &intentos, int suma = 0) {
    if (pos == size) {

        for(int i = 0; i < size; i++){
            suma += int(clave[i]);
        }

        if(suma % 2 == 0){
            intentos++;
            cout << "Clave: " << clave << endl;
            cout << "Suma: " << suma << endl;
        }

        return;
    }
    
    for (int i = 32; i < 127; i++) {
        clave[pos] = char(i);
        generarCombinaciones(clave, size, pos + 1, intentos, suma);
    }
}

int posicionDe(int size) {
    string clave(size, 'a');
    int intentos = 0;
    bool encontrado = false;
    generarCombinaciones(clave, size, 0, intentos);
    return intentos;
}

int main() {
    int size;
    cin >> size;

    cout << posicionDe(size) << endl;

    cout << char(123) << endl;
    return 0;
}