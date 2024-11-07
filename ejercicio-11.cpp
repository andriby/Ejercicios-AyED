#include <iostream>
using namespace std;

float sumarDecimales(int n, int i = 1, float suma = 0){
    if (n < 0){
        return -1;
    }else if(i == n + 1){
        return suma;
    }else{
        suma += float(1.0 / i);
        return sumarDecimales(n, i + 1, suma);
    }
}

int main(){
    int n = 0;
    cin >> n;
    cout << sumarDecimales(n);
    return 0;
}