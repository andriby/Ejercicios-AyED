#include <iostream>
using namespace std;

int ns[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

void generarCombinaciones(int m, int pos, int &intentos, int numero[9]) {
    if (pos == m) {
        intentos++;
        
        int aux = 0;
        for (int i = 0; i < m; i++) {
            aux = aux * 10 + numero[i];
            if (aux % (i + 1) != 0) {
                return;
            }
        }

        for (int i = 0; i < m; i++) {
            cout << numero[i];
        }
        cout << endl;

        return;
    }

    for (int i = 0; i < 9; i++) {
        if (ns[i] != 0) {
            int temp = ns[i];
            numero[pos] = ns[i];
            ns[i] = 0;

            generarCombinaciones(m, pos + 1, intentos, numero);

            ns[i] = temp;
        }
    }
}

void generarNumeros(int m) {
    int intentos = 0;
    int numero[9] = {0};
    generarCombinaciones(m, 0, intentos, numero);
    cout << "Intentos " << intentos;
}

int main() {
    int m;
    cin >> m;

    if (m > 0 && m <= 9) {
        cout << "Numeros validos:" << endl;
        generarNumeros(m);
    } else {
        cout << "El valor de m debe ser entre 1 y 9." << endl;
    }

    return 0;
}