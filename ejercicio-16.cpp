#include <iostream>
using namespace std;

int voltear(int n, int digitos, int aux = 0){
    if(digitos == 0){
        return aux;
    }
    aux = aux * 10 + n % 10;
    return voltear(n / 10, digitos - 1, aux);
}

int main(){
    int n = 0, digitos = 0;
    cin >> n;
    cin >> digitos;
    cout << voltear(n, digitos);
    return 0;
}