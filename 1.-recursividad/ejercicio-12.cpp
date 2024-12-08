#include <iostream>
#include <math.h>

using namespace std;

double potencia(double base, int exponente){
    if(exponente == 0){
        return base;
    }else if(exponente > 0 && exponente % 2 == 0){
        return potencia(pow(base * base, exponente / 2), exponente / 2);
    }else if(exponente > 0 && exponente % 2 != 0){
        return potencia(pow(base, exponente - 1) * base, exponente - 1);
    }
}

int main(){
    double a = double(5.0 / 3.0);
    int b = 2; 
    cout << potencia(a, b);
}