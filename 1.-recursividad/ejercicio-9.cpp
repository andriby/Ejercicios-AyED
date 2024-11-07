#include <iostream>
using namespace std;

int sumarNaturales(int n, int i = 1, int suma = 0){
    if (n < 0){
        return -1;
    }else if(i == n + 1){
        return suma;
    }else{
        return sumarNaturales(n, i + 1, suma += i);
    }
}

int main(){
    int n = 0;
    cin >> n;
    cout << sumarNaturales(n);
    return 0;
}